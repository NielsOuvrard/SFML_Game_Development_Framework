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

#ifndef GRAPHICS_HPP
#define GRAPHICS_HPP

#include <SFML/Graphics.hpp>
#include "IEntity.hpp" // Include your entity class definition

class Graphics
{
public:
    Graphics(sf::RenderWindow &window);

    // Clear the window
    void clear();

    // Render an entity
    void renderEntity(IEntity &entity);

    // Display the rendered content
    void display();

    // Get a reference to the game window
    sf::RenderWindow &getWindow();

private:
    sf::RenderWindow &window;

    // Add any other private members or methods relevant to graphics
};

#endif // GRAPHICS_HPP
