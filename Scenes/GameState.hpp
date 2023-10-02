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

#include "IGameState.hpp"

#ifndef GAMESTATE_HPP
#define GAMESTATE_HPP

class Game;

class GameState : public IGameState
{
public:
    GameState();

    // Implement the methods from the base class
    void handleInput(sf::Event &event, Game &game) override;
    void update(sf::Time deltaTime) override;
    void render(sf::RenderWindow &window) override;

private:
};

#endif // GAMESTATE_HPP