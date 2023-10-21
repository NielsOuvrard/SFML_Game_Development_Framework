/*
** Created the 02/10/2023
*/

#include "Collision.hpp"

// Check if two rectangles overlap (collision detection)
bool Collision::checkRectCollision(const sf::FloatRect &rect1, const sf::FloatRect &rect2)
{
    return rect1.intersects(rect2);
}

// Resolve collisions between two entities (placeholder implementation)
void Collision::resolveCollision(IEntity &entity1, IEntity &entity2)
{
    // Placeholder implementation for collision resolution
    // You should customize this based on your game's requirements
    // For example, you might change the position, velocity, or health of the entities
}