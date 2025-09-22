#include <stdio.h>
#include <ctype.h>  // for tolower()

int main() {
    char str[100];
    int i, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read input with spaces

    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);  // convert to lowercase

        if (ch >= 'a' && ch <= 'z') {  // check if alphabet
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
