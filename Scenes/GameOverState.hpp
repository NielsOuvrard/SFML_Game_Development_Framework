/*
** Created the 02/10/2023
*/

#ifndef GAMEOVERSTATE_HPP
#define GAMEOVERSTATE_HPP

#include <SFML/Graphics.hpp>
#include "IGameState.hpp" // Include the base game state class

class GameOverState : public IGameState
{
public:
    GameOverState();

    // Implement the methods from the base class
    void handleInput(sf::Event &event, Game &game) override;
    void update(sf::Time deltaTime) override;
    void render(sf::RenderWindow &window) override;

private:
    sf::Font font;
    sf::Text gameOverText;
    sf::Text restartText;

    // Add any other private members or methods relevant to the game over state
};

#endif // GAMEOVERSTATE_HPP
