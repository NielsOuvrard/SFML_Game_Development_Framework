/*
** Created the 02/10/2023
*/

#include "Enemy.hpp"
#include "Game.hpp"
#include "GameOverState.hpp"
#include "IGameState.hpp"
#include "Player.hpp"

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
    Player *player;
    Enemy *enemy;
};

#endif// GAMESTATE_HPP