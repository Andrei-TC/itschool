# Finding Arthur (demo)

This project is a command-line adventure game centered around encounters. Players assume the role of a warrior who navigates through a series of challenges, including combat, exploration, and item utilization. The game features a diverse array of scenarios, each with distinct outcomes influenced by the players' decisions and the items at their disposal.

## Features

- Multiple encounter types (good, neutral, and bad)
- Item system 
- Combat system
- Healing and damage mechanics
- Dynamic inventory system
- Story-driven gameplay with narrative choices

## Starting the Game

To run Finding Arthur, follow these steps:

1. Clone the project onto your computer.
2. Open the project in an IDE that supports C++.
3. Compile and run the project.
4. Follow the instructions on the screen to make choices and progress through the game.

## Dependencies

This project requires the following dependencies:

- C++ compiler
- C++ Standard Library (like vector, string, algorithm, and so on... )

## File Structure

Some of the files are:

- `main.cpp`: The main file that initializes the game and manages encounters.
- `encounters.h`: Header file for the `Encounters` class hierarchy, defining various encounter types like combat, exploration, and puzzle scenarios.
- `itemSystem.h`: Header file for the `Items` class and its subclasses, which handle the player's inventory system.
- `warrior.h`: Defines the `Warrior` class, managing the player's stats such as health, attack power, and current inventory.
- `battleSystem.h`: Contains the logic for the combat system, including interactions between the warrior and enemies.
- `script.h`: A file containing the story scripts and descriptive text for various encounters in the game.

## Gameplay Flow

- The game progresses as the player makes decisions in various encounter scenarios. Each decision may lead to combat, a peaceful resolution, or other story outcomes. The player’s inventory and health are affected by these decisions.