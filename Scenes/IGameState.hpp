/*
** Created the 02/10/2023
*/

#include <SFML/Graphics.hpp>

#ifndef IGAMESTATE_HPP
#define IGAMESTATE_HPP

class Game;

class IGameState
{
public:
    virtual ~IGameState() {}

    // Handle user input
    virtual void handleInput(sf::Event &event, Game &game) = 0;

    // Update game logic
    virtual void update(sf::Time deltaTime) = 0;

    // Render game content
    virtual void render(sf::RenderWindow &window) = 0;
};

#endif// IGAMESTATE_HPP