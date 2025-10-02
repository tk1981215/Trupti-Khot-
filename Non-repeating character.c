#include <stdio.h>
#include <string.h>

#define NO_OF_CHARS 256  // Total ASCII characters

char firstNonRepeatingChar(char *str) {
    int count[NO_OF_CHARS] = {0}; // Array to store frequency of each character
    int i;

    // Step 1: Count frequency of each character
    for (i = 0; str[i]; i++) {
        count[(unsigned char)str[i]]++;
    }

    // Step 2: Find first character with count 1
    for (i = 0; str[i]; i++) {
        if (count[(unsigned char)str[i]] == 1)
            return str[i];
    }

    return '\0'; // If no non-repeating character found
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    char result = firstNonRepeatingChar(str);

    if (result != '\0')
        printf("The first non-repeating character is: %c\n", result);
    else
        printf("No non-repeating character found.\n");

    return 0;
}
