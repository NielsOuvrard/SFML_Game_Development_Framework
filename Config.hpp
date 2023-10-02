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

#include <string>

#ifndef CONFIG_HPP
#define CONFIG_HPP

// Window settings
const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 600;
const std::string WINDOW_TITLE = "SFML Game";

// Game settings
const float GAME_SPEED = 60.0f; // Frames per second
const float GRAVITY = 9.8f;     // Gravity strength

// Player settings
const float PLAYER_SPEED = 200.0f;
const float PLAYER_JUMP_SPEED = 300.0f;
const int PLAYER_INITIAL_LIVES = 3;

// Enemy settings
const int ENEMY_COUNT = 10;
const float ENEMY_SPEED = 100.0f;

// Add any other game-related constants and configuration settings here

#endif // CONFIG_HPP
