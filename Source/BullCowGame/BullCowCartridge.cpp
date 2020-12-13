// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

    // Welcoming The Player
    PrintLine(TEXT("Welcome to the Bull Cows Game"));
    PrintLine(TEXT("Guess the word")); // Length of characters not specified
    PrintLine(TEXT("Press enter to continue..."));

    InitGame(); // Setting Up Game

    // Prompt Player For Guess

}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();

    if(Input == HiddenWord)
        PrintLine(TEXT("You have Won!"));
    else
        PrintLine(TEXT("You have Lost!"));

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

void UBullCowCartridge::InitGame()
{
    HiddenWord = TEXT("uncopyrightable");
    Lives = 4;
}
