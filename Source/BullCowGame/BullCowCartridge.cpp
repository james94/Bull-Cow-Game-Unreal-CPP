// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

    SetupGame();

    PrintLine(TEXT("The HiddenWord is: %s."), *HiddenWord); // Debug Line

    // Welcoming The Player
    PrintLine(TEXT("Welcome to the Bull Cows Game"));
    PrintLine(TEXT("Guess the %i letter word"), HiddenWord.Len());
    PrintLine(TEXT("Press enter to continue..."));

    // Prompt Player For Guess
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();

    if(Input == HiddenWord)
    {
        PrintLine(TEXT("You have Won!"));
    }
    else
    {
        if(Input.Len() != HiddenWord.Len())
        {
            PrintLine(TEXT("The Hidden Word is %i characters long, try again!"), HiddenWord.Len());
        }
        PrintLine(TEXT("You have Lost!"));
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
    HiddenWord = TEXT("uncopyrightable");
    Lives = 4;
}
