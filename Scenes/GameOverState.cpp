/*
** Created the 02/10/2023
*/

#include "GameOverState.hpp"
#include "MainMenuState.hpp"

// Constructor
GameOverState::GameOverState()
{
    // Load resources, initialize variables, and set up the game over screen here
    if (!font.loadFromFile("assets/fonts/Identidad-ExtraBold.otf")) {
        // Handle font loading error
    }

    gameOverText.setFont(font);
    gameOverText.setString("Game Over");
    gameOverText.setCharacterSize(48);
    gameOverText.setFillColor(sf::Color::Red);
    gameOverText.setPosition(200.0f, 100.0f);

    restartText.setFont(font);
    restartText.setString("Press R to Restart");
    restartText.setCharacterSize(24);
    restartText.setFillColor(sf::Color::White);
    restartText.setPosition(250.0f, 250.0f);
}

// Handle user input
void GameOverState::handleInput(sf::Event &event, Game &game)
{
    if (event.type == sf::Event::KeyPressed) {
        if (event.key.code == sf::Keyboard::R) {
            // Restart the game when R key is pressed
            // You may want to implement a state manager for this

            std::unique_ptr<IGameState> gameState = std::make_unique<MainMenuState>();
            game.changeState(std::move(gameState));
        }
    }
}

// Update game logic (e.g., animate game over screen elements)
void GameOverState::update(sf::Time deltaTime)
{
    // Update game logic specific to the game over screen
    // You can add animations or other effects here
}

// Render the game over screen
void GameOverState::render(sf::RenderWindow &window)
{
    // window.clear(sf::Color::Black);

    // Render game over screen elements
    window.draw(gameOverText);
    window.draw(restartText);

    // window.display();
}
