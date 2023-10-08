// RockPaperScissors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// This is Version 1 for my Rock, Paper, Scissors game.
// Here I created two const char* arrays representing player one and two, and the options they can choose

#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(NULL)); // initialize  the random seed

    const char* PlayerOne[3] = { "Rock", "Paper", "Scissors" }; // Options for Player One

    const char* PlayerTwo[3] = { "Rock", "Paper", "Scissors" }; // Options for Player Two

    int randomChoiceforPlayerOne = rand() % 3; // Generates a random number from 0 to 2 for PlayerOne array

    int randomChoiceForPlayerTwo = rand() % 3; // Generates a random number from 0 to 2 for PlayerTwo array


    std::cout << "Welcome to Rock, Paper, Scissors! \n";
    std::cout << "Ready, Players?\n";
    std::cout << "Rock, Paper, Scissors, Shoot!\n";

    std::cout << "Player One: " << PlayerOne[randomChoiceforPlayerOne] << "\n"; // Prints out what Player One picks from the array
    std::cout << "Plater Two: " << PlayerTwo[randomChoiceForPlayerTwo] << "\n"; // Prints out what Player Two picks from the array

    // If statements to check who won based on what object the players picked

    if (PlayerOne[randomChoiceforPlayerOne] == "Rock" && PlayerTwo[randomChoiceForPlayerTwo] == "Scissors") 
    {
        std::cout << "Player One Wins!" << "\n";
    
    }

    if (PlayerOne[randomChoiceforPlayerOne] == "Paper" && PlayerTwo[randomChoiceForPlayerTwo] == "Rock") 
    {
        std::cout << "Player One Wins!" << "\n";
    }

    if (PlayerOne[randomChoiceforPlayerOne] == "Scissors" && PlayerTwo[randomChoiceForPlayerTwo] == "Paper")
    {
        std::cout << "Player One Wins!" << "\n";
    }


    if (PlayerOne[randomChoiceforPlayerOne] == "Scissors" && PlayerTwo[randomChoiceForPlayerTwo] == "Rock")
    {
        std::cout << "Player Two Wins!" << "\n";

    }

    if (PlayerOne[randomChoiceforPlayerOne] == "Rock" && PlayerTwo[randomChoiceForPlayerTwo] == "Paper")
    {
        std::cout << "Player Two Wins!" << "\n";
    }

    if (PlayerOne[randomChoiceforPlayerOne] == "Paper" && PlayerTwo[randomChoiceForPlayerTwo] == "Scissors")
    {
        std::cout << "Player Two Wins!" << "\n";
    }

    else if((PlayerOne[randomChoiceforPlayerOne] == "Rock" && PlayerTwo[randomChoiceForPlayerTwo] == "Rock") || (PlayerOne[randomChoiceforPlayerOne] == "Paper" && PlayerTwo[randomChoiceForPlayerTwo] == "Paper") || (PlayerOne[randomChoiceforPlayerOne] == "Scissors" && PlayerTwo[randomChoiceForPlayerTwo] == "Scissors"))
    {
        std::cout << "It is a Tie!" << "\n"; // If both players both pick the same object, it becomes a tie.
    }
}
