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

#include "Game.hpp"

int main()
{
    Game game;
    game.run();
    return 0;
}
/*
├── Main.cpp
├── Game.hpp
├── Game.cpp
├── Entities/
│   ├── Entity.hpp
│   ├── Entity.cpp
│   ├── Player.hpp
│   ├── Player.cpp
│   ├── Enemy.hpp
│   ├── Enemy.cpp
│   └── ...
├── Managers/
│   ├── ResourceManager.hpp
│   ├── ResourceManager.cpp
│   ├── InputManager.hpp
│   ├── InputManager.cpp
│   ├── Utility.hpp
│   ├── Utility.cpp
│   ├── Graphics.hpp
│   ├── Graphics.cpp
│   ├── Collision.hpp
│   ├── Collision.cpp
│   └── ...
├── Scenes/
│   ├── MainMenuState.hpp
│   ├── MainMenuState.cpp
│   ├── GameState.hpp
│   ├── GameState.cpp
│   ├── GameOverState.hpp
│   ├── GameOverState.cpp
│   └── ...
├── Config.hpp
├── assets/
│   ├── textures/
│   ├── fonts/
│   └── sounds/
└── ...
*/