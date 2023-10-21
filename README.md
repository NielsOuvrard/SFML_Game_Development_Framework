# SFML Game Development Framework

Welcome to the SFML Game Development Framework! This project provides a starting point for creating 2D games using the Simple and Fast Multimedia Library (SFML). With a structured architecture, this framework allows you to focus on game development rather than worrying about the low-level details of the SFML library.

## Project Structure

The project is organized as follows:


- **Config.hpp**: Configuration settings for the game.
- **Entities**: Contains game entities, such as `Enemy` and `Player`, along with an interface `IEntity`.
- **Game.cpp** and **Game.hpp**: The main game class.
- **CMakeLists**: Build instructions for your project.
- **Managers**: Various managers like Collision, Graphics, InputManager, ResourceManager, and Utility.
- **Scenes**: Game states like `GameState`, `MainMenuState`, and `GameOverState`.
- **assets**: Game assets like fonts, sounds, and textures.
- **main.cpp**: Entry point of the application.

## Getting Started

1. Clone this repository to your local machine.
2. Build the project using the provided Makefile.
3. Run the game executable.

```bash
mkdir build
cmake -S . -B build
cmake --build build
./build/sfml_basics
```

## How to Use

1. **Create Game Entities**:
   - To create game entities, inherit from the `IEntity` class provided in the `Entities` directory. Implement the necessary methods and properties for your game objects, such as `Update` and `Render`.

2. **Define Game States**:
   - Define different game states by inheriting from the `IGameState` class found in the `Scenes` directory. Implement required methods such as `Update`, `Render`, and any state-specific logic.
   - Examples of game states might include the main menu, in-game state, game over state, etc.

3. **Utilize Managers**:
   - The project provides various managers to help you handle specific aspects of your game:
     - `Collision`: Use this manager to manage collision detection and responses for game entities.
     - `Graphics`: Manage graphics rendering and screen drawing using the provided methods.
     - `InputManager`: Handle user input, such as keyboard and mouse events.
     - `ResourceManager`: Efficiently load and manage game resources like textures, sounds, and fonts.
     - `Utility`: A utility manager for handling general functions and tasks in your game.

4. **Add Your Gameplay Logic**:
   - Implement your game's logic within the appropriate game states. For example, you can control how entities interact, handle game events, and manage transitions between different states.

5.  **Have Fun Developing!**:
    - Ultimately, game development should be an enjoyable and creative process. Concentrate on bringing your game concept to life and crafting an engaging player experience. With the SFML Game Development Framework's structured architecture, you can focus on the gameplay itself without getting bogged down in low-level details.

Remember that game development is an iterative process. Don't be afraid to experiment, learn from your mistakes, and keep refining your game until it reaches the desired level of fun and polish.

Happy game development!
