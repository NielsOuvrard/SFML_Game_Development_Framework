/*
** Created the 02/10/2023
*/

#include "IEntity.hpp"

#ifndef ENEMY_HPP
#define ENEMY_HPP

class Enemy : public IEntity
{
public:
    Enemy();
    void update() override;
    void render(sf::RenderWindow &window) override;
    sf::Sprite getSprite() const override;

private:
    sf::Sprite sprite;
    sf::Texture texture;
    sf::IntRect rect;
    sf::Clock clock;
    bool moveUp;
    int currentFrame;
};

#endif// ENEMY_HPP