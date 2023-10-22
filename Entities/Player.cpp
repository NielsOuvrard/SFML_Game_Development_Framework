/*
** Created the 02/10/2023
*/

#include "Player.hpp"

//  100, 0, 33, 18, 5, 1, true
Player::Player()
{
    texture.loadFromFile("assets/textures/r-typesheet42.gif");
    texture.setSmooth(false);
    sprite.setTexture(texture);
    sprite.setPosition(100, 100);
    sprite.setScale(3, 3);
    sprite.setTextureRect(sf::IntRect(0, 0, 33, 18));

    rect = sf::IntRect(0, 0, 33, 18);
    moveUp = true;
    currentFrame = 0;
}

void Player::update()
{
    if (clock.getElapsedTime().asSeconds() > 0.1f) {
        if (moveUp) {
            currentFrame++;
        }
        else {
            currentFrame--;
        }
        if (currentFrame == 4) {
            moveUp = false;
        }
        if (currentFrame == 0) {
            moveUp = true;
        }
        sprite.setTextureRect(sf::IntRect(
                currentFrame * 33, 0, 33, 18));
        clock.restart();
    }
    // Update the Player's position, health, etc. here
}

void Player::render(sf::RenderWindow &window)
{
    // Render the Player's sprite here
}

sf::Sprite Player::getSprite() const
{
    return sprite;
}