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

#include "MainMenuState.hpp"
#include <iostream>
#include <memory>
#include "GameState.hpp"

// Constructor
MainMenuState::MainMenuState()
{
    // Load resources, initialize variables, and set up the main menu here
    if (!font.loadFromFile("./assets/fonts/Identidad-ExtraBold.otf"))
    {
        // Handle font loading error
    }

    titleText.setFont(font);
    titleText.setString("Main Menu");
    titleText.setCharacterSize(48);
    titleText.setFillColor(sf::Color::White);
    titleText.setPosition(200.0f, 100.0f);

    startText.setFont(font);
    startText.setString("Press Enter to Start");
    startText.setCharacterSize(24);
    startText.setFillColor(sf::Color::White);
    startText.setPosition(250.0f, 250.0f);
}

// Handle user input
void MainMenuState::handleInput(sf::Event &event, Game &game)
{
    if (event.type == sf::Event::KeyPressed)
    {
        if (event.key.code == sf::Keyboard::Enter)
        {
            std::cout << "Enter pressed" << std::endl;

            std::unique_ptr<IGameState> gameState = std::make_unique<GameState>();
            game.changeState(std::move(gameState));
        }
    }
}

// Update game logic (e.g., animate menu elements)
void MainMenuState::update(sf::Time deltaTime)
{
    // Update game logic specific to the main menu
    // You can add animations or other effects here
}

// Render the main menu
void MainMenuState::render(sf::RenderWindow &window)
{
    // window.clear(sf::Color::Black);

    // Render menu elements
    window.draw(titleText);
    window.draw(startText);

    // window.display();
}
