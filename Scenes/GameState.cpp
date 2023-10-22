/*
** Created the 02/10/2023
*/

#include "GameState.hpp"

// Constructor
GameState::GameState()
{
    player = new Player();
    enemy = new Enemy();
    // Load resources, initialize variables, and set up the main menu here
}

// Handle user input
void GameState::handleInput(sf::Event &event, Game &game)
{
    if (event.type == sf::Event::KeyPressed) {
        if (event.key.code == sf::Keyboard::Enter) {
            std::cout << "Enter pressed" << std::endl;

            // std::unique_ptr<GameOverState> gameState = std::make_unique<GameOverState>();
            std::unique_ptr<IGameState> gameState = std::make_unique<GameOverState>();
            game.changeState(std::move(gameState));
            // game.changeState(gameState);
        }
    }
}

// Update game logic (e.g., animate menu elements)
void GameState::update(sf::Time deltaTime)
{
    // Update game logic specific to the main menu
    // You can add animations or other effects here
}

// Render the main menu
void GameState::render(sf::RenderWindow &window)
{
    // window.clear(sf::Color::Black);
    // window.display();
    window.draw(player->getSprite());
    window.draw(enemy->getSprite());
}
