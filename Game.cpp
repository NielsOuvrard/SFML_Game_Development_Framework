/*
** Created the 02/10/2023
*/

#include "Game.hpp"
#include "MainMenuState.hpp"

Game::Game() : window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), WINDOW_TITLE)
{
    // Initialize game-specific variables, resources, and other setup here
    currentState = std::make_unique<MainMenuState>();
}

void Game::run()
{
    sf::Clock clock;
    sf::Time deltaTime;

    window.setFramerateLimit(GAME_SPEED);
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            // Handle other event types (e.g., user input) here
            currentState->handleInput(event, *this);
        }

        deltaTime = clock.restart();

        // Update the current game state
        currentState->update(deltaTime);

        window.clear();

        currentState->render(window);

        window.display();
    }
}

void Game::changeState(std::unique_ptr<IGameState> newState)
{
    currentState = std::move(newState);
}