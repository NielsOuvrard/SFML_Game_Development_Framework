/*
** Created the 02/10/2023
*/

#include <SFML/Graphics.hpp>

#ifndef IENTITY_HPP
#define IENTITY_HPP

class IEntity
{
public:
    virtual void update() = 0;
    virtual void render(sf::RenderWindow &window) = 0;
    virtual sf::Sprite getSprite() const = 0;

protected:
    sf::Vector2f position;
    // Other common entity properties
};

#endif// IENTITY_HPP