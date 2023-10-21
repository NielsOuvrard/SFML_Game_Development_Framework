/*
** Created the 02/10/2023
*/

#include "Graphics.hpp"

// Constructor
Graphics::Graphics(sf::RenderWindow &window) : window(window)
{
    // Perform any additional setup related to graphics here, if needed
}

// Clear the window
void Graphics::clear()
{
    window.clear();
}

// Render an entity
void Graphics::renderEntity(IEntity &entity)
{
    // You would typically render the entity's graphical representation here
    // For this example, we assume the entity has a sprite that can be drawn
    window.draw(entity.getSprite());
}

// Display the rendered content
void Graphics::display()
{
    window.display();
}

// Get a reference to the game window
sf::RenderWindow &Graphics::getWindow()
{
    return window;
}
