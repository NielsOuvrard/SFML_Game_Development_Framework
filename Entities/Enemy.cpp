/*
** Created the 02/10/2023
*/

#include "Enemy.hpp"

Enemy::Enemy()
{
    // Initialize any common resources or variables for enemies here
}

void Enemy::update()
{
    // Update the enemy's position, health, etc. here
}

void Enemy::render(sf::RenderWindow &window)
{
    // Render the enemy's sprite here
}

sf::Sprite Enemy::getSprite() const
{
    return sprite;
}