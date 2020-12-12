# Bulls and Cows Game - Unreal C++

Bulls &amp; Cows is a terminal game within Unreal C++.

## How Does The Game Work?

This game is a word guessing game in which you guess the isogram. An isogram is any word that doesn't have any repeating letters. It limits our selection of words and also enables us to give a bull or a cow. What are those? A letter in a guess and in the right place is a "Bull". A letter in a guess and in the wrong place is a "Cow". If you guess a letter that isn't in our hidden word, then you won't get any bulls or cows.

## Mechanics of The Game

The hidden word is going to be pulled from a list of words. The game will let us know the number of lives we have. The player will make a guess. You will lose a life if you get it wrong. The game will display how many bulls and cows you got. If the correct word is guessed, then you won. If you do not correctly guess the word and your lives are gone, then the game is over.

## Example 1

Hit Play in Unreal.

Our first word we are trying to guess is `action`. The top line is added, so we know what we are supposed to be guessing. It is only there for debugging purposes. It is a good way to debug our code, so that we know what we are trying to guess is correct. Of course, the full game won't have that in place. So, we'll be guessing the 6 letter word and we'll have 6 lives. We can see the number of letters in the word we are trying to guess and the number of lives we have are linked. If we generate a new word, then the word we are guessing will change and the number of lives we have will change too. So, we can adjust the amount of lives we have based on the length of the word.

If we put in a word that is too short, the game will prompt the player and allow them to guess again without taking away one of their lives.

If we put in a 5 letter word that isn't an isogram, the game will prompt the player that they entered a word that isn't an isogram.

If we guess a word with the matching length of characters as the word we are trying to guess, but our guess doesn't match, the game will tell us the number of letters (`Bulls`) we got correct and the letters (`Cows`) we got incorrect. We will also lose a life for guessing the word incorrectly.

If we enter a word and all the characters in that word match the word we are trying to guess, then we win the game. For example, if we guess `action`, then we win the game because that is the word we are trying to guess for this round.

Alternatively, if we have lost all our lives because we kept guessing the wrong word, the game will end and tell us what the correct word was.