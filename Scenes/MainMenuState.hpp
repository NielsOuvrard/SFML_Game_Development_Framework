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

#include <SFML/Graphics.hpp>
#include "IGameState.hpp" // Include the base game state class

#ifndef GAMEOVERSTATE_HPP
#include "GameOverState.hpp"
#endif // GAMEOVERSTATE_HPP

#ifndef GAME_HPP
#include "Game.hpp"
#endif // GAME_HPP

#ifndef MAINMENUSTATE_HPP
#define MAINMENUSTATE_HPP

class MainMenuState : public IGameState
{
public:
    MainMenuState();

    // Override the methods from the base class
    void handleInput(sf::Event &event, Game &game) override;
    void update(sf::Time deltaTime) override;
    void render(sf::RenderWindow &window) override;

private:
    sf::Font font;
    sf::Text titleText;
    sf::Text startText;

    // Add any other private members or methods relevant to the main menu
};

#endif // MAINMENUSTATE_HPP