#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // List of possible weather conditions
    char *weatherOptions[] = {"Sunny", "Rainy", "Cloudy"};
    
    // Seed random number generator
    srand(time(NULL));

    // Select random weather
    int randomIndex = rand() % 3;
    char *selectedWeather = weatherOptions[randomIndex];

    char guess[20];
    int attempts = 3;

    printf("=== WEATHER GUESS GAME ===\n");
    printf("Guess the weather (Sunny / Rainy / Cloudy)\n\n");

    while (attempts > 0) {
        printf("Attempt %d: Enter your guess: ", 4 - attempts);
        scanf("%s", guess);

        // Compare user guess with selected weather
        if (strcasecmp(guess, selectedWeather) == 0) {
            printf("\n Congratulations! You guessed it right. Weather was: %s\n", selectedWeather);
            return 0;
        } else {
            printf("Wrong guess! Try again.\n");
        }

        attempts--;
    }

    printf("\n You are out of attempts! The correct weather was: %s\n", selectedWeather);

    return 0;
}
