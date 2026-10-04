/*
The program generates a random number and asks the player to guess it.

If the player's guess is greater than the actual number, the program should display:

    Lower number please

Similarly, if the user's guess is smaller than the actual number, the program should display:

    Higher number please

The game should continue until the player guesses the correct number.

Once the correct number is guessed, the program should display the total number of guesses taken by
the player.

Example Run:
=== NUMBER GUESSING GAME ===
I have generated a number between 1 and 100.
Can you guess it?
Enter your guess: 50
Higher number please
Enter your guess: 75
Lower number please
Enter your guess: 65
Congratulations! You guessed the number 65
in 3 attempts!

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    printf("=== NUMBER GUESSING GAME ===\n");
    printf("I have generated a number between 1 and 100. Can you guess it?\n");

    int guessed_number = 0, random_number, no_of_guesses = 1;

    srand(time(0));
    random_number = rand() % 100 + 1;

    while (guessed_number != random_number){

        printf("Enter your guess: ");
        scanf("%d", &guessed_number);

        if (guessed_number > random_number){
            printf("Lower number please \n");
            no_of_guesses++;
        }
        else if (guessed_number < random_number){
            printf("Higher number please \n");
            no_of_guesses++;
        }
    }

    printf("You guessed it right\n");
    printf("Total number of guesses you took: %d\n", no_of_guesses);

    return 0;

}