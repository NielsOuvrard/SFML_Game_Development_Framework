/*
** Created the 02/10/2023
*/

#include "Enemy.hpp"

Enemy::Enemy()
{
    // Initialize any common resources or variables for enemies here

    texture.loadFromFile("assets/textures/r-typesheet22.gif");
    texture.setSmooth(false);
    sprite.setTexture(texture);
    sprite.setPosition(200, 100);
    sprite.setScale(3, 3);
    sprite.setTextureRect(sf::IntRect(0, 0, 33, 33));

    rect = sf::IntRect(0, 0, 33, 33);
    moveUp = true;
    currentFrame = 0;
}

void Enemy::update()
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
}

void Enemy::render(sf::RenderWindow &window)
{
    // Render the enemy's sprite here
}

sf::Sprite Enemy::getSprite() const
{
    return sprite;
}