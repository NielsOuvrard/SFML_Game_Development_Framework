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

#pragma once
#include <vector>
#include <string>
#include <iostream>

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
// #include <SFML/Network.hpp>

// #include "IGameState.hpp"
#include "Config.hpp"

#ifndef IGAMESTATE_HPP
#include "IGameState.hpp"
#endif // IGAMESTATE_HPP

#ifndef GAME_HPP
#define GAME_HPP

class Game
{
public:
    Game();
    void run();
    void changeState(std::unique_ptr<IGameState> newState);

private:
    sf::RenderWindow window;
    std::unique_ptr<IGameState> currentState;

    void processInput();
    void update(sf::Time deltaTime);
    void render();

    // Add any other private members or methods relevant to the game
};

#endif // GAME_HPP