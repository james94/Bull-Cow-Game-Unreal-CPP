// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

    SetupGame();

    PrintLine(TEXT("The HiddenWord is: %s."), *HiddenWord); // Debug Line

    // Prompt Player For Guess
}

void UBullCowCartridge::OnInput(const FString &Input) // When the player hits enter
{
    // If Game is Over, Then do ClearScreen() and SetupGame() the game
    // Else Checking Player Guess
    if (bGameOver)
    {
        ClearScreen();
        SetupGame();
    }
    else
    {
        ProcessGuess(Input);
    }

    // Check If Isogram
    // Prompt To Guess Again

    // Check If It Is The Right Amount of Characters
    // Prompt To Guess Again

    // Decrement 1 Life

    // Check If Lives > 0
    // If Yes, Guess Again
    // Show Lives Left
    // If No, Show Game over and Hidden Word?
    // Prompt To Play Again, Press Enter To Play Again?
    // Check User Input
    // Play Again Or Quit
}

void UBullCowCartridge::SetupGame()
{
    HiddenWord = TEXT("copy");
    Lives = HiddenWord.Len();
    bGameOver = false;

    // Welcoming The Player
    PrintLine(TEXT("Welcome to the Bull Cows Game!"));
    PrintLine(TEXT("You have %i number of Lives"), Lives);
    PrintLine(TEXT("Guess the %i letter word!"), HiddenWord.Len());
    PrintLine(TEXT("Type in your guess. \nPress enter to continue..."));
}

void UBullCowCartridge::EndGame()
{
    bGameOver = true;
    PrintLine(TEXT("Game Over. Press enter to continue..."));
}

void UBullCowCartridge::ProcessGuess(FString Guess)
{
    if (Guess == HiddenWord)
    {
        PrintLine(TEXT("You have Won!"));
        EndGame();
    }
    else
    {
        PrintLine(TEXT("Lost a life!"));
        PrintLine(TEXT("%i"), --Lives);
        if (Lives > 0)
        {
            if (Guess.Len() != HiddenWord.Len())
            {
                PrintLine(TEXT("Sorry, try guessing again! \nYou have %i lives remaining!"), Lives);
            }
        }
        else
        {
            PrintLine(TEXT("You have no lives left!"));
            EndGame();
        }
    }
}
