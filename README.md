# Craps Game

This program allows you to play the game of Craps, a dice game played in casinos. The objective of the game is to predict the outcome of rolling two dice.

## How to Run the Program

1. Make sure you have a C++ compiler installed on your system.

2. Copy the code provided in the program file and save it with a `.cpp` extension (e.g., `craps.cpp`).

3. Open a terminal or command prompt and navigate to the directory where you saved the program file.

4. Compile the program by running the following command: g++ craps.cpp -o craps
 
5. Execute the program by running the following command: ./craps

6. The program will prompt you to enter the amount of credits you want to wager. Make sure to enter a positive integer value.

7. Follow the instructions provided by the program to play the game. You will be asked to type "Go" to roll the dice.

8. After each game, the program will display the outcome (win or lose) and update your remaining credits.

9. If you run out of credits or decide to stop playing, the program will end.

## Program Structure

The program consists of the following main components:

- `main()`: The entry point of the program. It handles the main game loop and manages the player's credits.

- `playGame()`: This function simulates a game of Craps. It prompts the player to roll the dice, calculates the sum, and determines the outcome based on the game rules.

- `die()`: This function generates a random number between 1 and 6, simulating the roll of a single die.

- `rollDelay()`: This function introduces a delay between dice rolls for visual effect. However, it doesn't affect the outcome of the game.

## Program Flow

1. The program starts by asking you to enter the amount of credits you want to wager.

2. If the wager is not a positive integer, the program will terminate.

3. If your wager is greater than your available credits, the program will display an error message and terminate.

4. The program will call the `playGame()` function to simulate a game of Craps.

5. The game flow follows the standard rules of Craps, where you win if the initial roll results in a 7 or 11, and you lose if it results in a 2, 3, or 12. Otherwise, the program sets a point, and you continue rolling until you match the point or roll a 7.

6. After each game, the program updates your credits based on the outcome. If you run out of credits or choose to stop playing, the program will terminate.







