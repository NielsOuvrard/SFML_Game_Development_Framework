/*
**       ::::::::   ::::::::  :::        ::::::::   ::::::::
**     :+:    :+: :+:    :+: :+:       :+:    :+: :+:    :+:
**    +:+    +:+ +:+        +:+       +:+    +:+ +:+
**    +#++:++#  +#+        +#+       +#+    +:+ +#++:++#++
**  +#+    +#+ +#+        +#+       +#+    +#+        +#+
** #+#    #+# #+#    #+# #+#       #+#    #+# #+#    #+#
** ########   ########  ########## ########   ########
**
** Created the 02/10/2019
*/

#ifndef COLLISION_HPP
#define COLLISION_HPP

#include <SFML/Graphics.hpp>
#include "IEntity.hpp" // Include your entity class definition

class Collision
{
public:
    // Check if two rectangles overlap (collision detection)
    static bool checkRectCollision(const sf::FloatRect &rect1, const sf::FloatRect &rect2);

    // Resolve collisions between two entities
    static void resolveCollision(IEntity &entity1, IEntity &entity2);
};

#endif // COLLISION_HPP
