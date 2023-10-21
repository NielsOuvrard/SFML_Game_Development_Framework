cmake_minimum_required(VERSION 3.12)
project(sfml_basics)

set(CMAKE_CXX_STANDARD 20)

find_package(SFML 2.6 COMPONENTS window graphics system REQUIRED)

include_directories(
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_SOURCE_DIR}/Entities
    ${CMAKE_SOURCE_DIR}/Managers
    ${CMAKE_SOURCE_DIR}/Scenes
    ${CMAKE_SOURCE_DIR}
)
set(SOURCE_FILES
    Config.hpp
    Game.cpp
    Game.hpp
    main.cpp
)

set(ENTITY_FILES
    Entities/Enemy.cpp
    Entities/Enemy.hpp
    Entities/IEntity.hpp
    Entities/Player.cpp
    Entities/Player.hpp
)

set(MANAGER_FILES
    Managers/Collision.cpp
    Managers/Collision.hpp
    Managers/Graphics.cpp
    Managers/Graphics.hpp
    Managers/InputManager.hpp
    Managers/ResourceManager.hpp
    Managers/Utility.hpp
)

set(SCENE_FILES
    Scenes/GameOverState.cpp
    Scenes/GameOverState.hpp
    Scenes/GameState.cpp
    Scenes/GameState.hpp
    Scenes/IGameState.hpp
    Scenes/MainMenuState.cpp
    Scenes/MainMenuState.hpp
)

set(ASSETS_FILES
    assets/fonts/Identidad-ExtraBold.otf
    assets/textures/r-typesheet1.gif
)

add_executable(sfml_basics
    ${SOURCE_FILES}
    ${ENTITY_FILES}
    ${MANAGER_FILES}
    ${SCENE_FILES}
)

target_link_libraries(sfml_basics PRIVATE
    sfml-window
    sfml-graphics
    sfml-system
)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -g3 ") # -Wall -Wextra -Werror
