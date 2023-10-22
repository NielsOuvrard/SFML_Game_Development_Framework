/*
** Created the 02/10/2023
*/

#ifndef COLLISION_HPP
#define COLLISION_HPP

#include "IEntity.hpp"// Include your entity class definition
#include <SFML/Graphics.hpp>

class Collision
{
public:
    // Check if two rectangles overlap (collision detection)
    static bool checkRectCollision(const sf::FloatRect &rect1, const sf::FloatRect &rect2);

    // Resolve collisions between two entities
    static void resolveCollision(IEntity &entity1, IEntity &entity2);
};

#endif// COLLISION_HPP
