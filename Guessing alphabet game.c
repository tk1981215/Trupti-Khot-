#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main() {
    char guess, randomLetter;
    int attempts = 0;

    srand(time(NULL)); // Seed for random number
    randomLetter = 'A' + (rand() % 26); // Random letter between 'A' and 'Z'

    printf("Welcome to the Alphabet Guessing Game!\n");
    printf("I have chosen a letter between A and Z.\nTry to guess it!\n");

    do {
        printf("\nEnter your guess (A-Z): ");
        scanf(" %c", &guess); // Space before %c to ignore newline
        guess = toupper(guess); // Convert to uppercase for easy comparison
        attempts++;

        if (guess < 'A' || guess > 'Z') {
            printf("Invalid input! Please enter a letter between A and Z.\n");
            continue;
        }

        if (guess > randomLetter)
            printf("Too high! Try a letter before '%c'.\n", guess);
        else if (guess < randomLetter)
            printf("Too low! Try a letter after '%c'.\n", guess);
        else
            printf("\n🎉 Congratulations! You guessed it right — '%c'!\n", randomLetter);

    } while (guess != randomLetter);

    printf("You guessed the correct letter in %d attempts.\n", attempts);
    printf("Thanks for playing!\n");

    return 0;
}
