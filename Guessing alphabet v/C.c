#include <stdio.h>

int main() {
    char ch;
    printf("Please enter an alphabet: ");
    scanf(" %c", &ch);

    // Check for vowels
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a vowel.
", ch);
    } else {
        printf("%c is a consonant.
", ch);
    }

    return 0;
}
