#include <stdio.h>
#include <conio.h>   // for getch()

int main() {
    char ch;
    printf("Press any key (press 'q' to quit):\n");

    while (1) {
        ch = getch();  // read a single key without Enter
        printf("You pressed: %c (ASCII: %d)\n", ch, ch);

        if (ch == 'q') {
            printf("Exiting...\n");
            break;
        }
    }
    return 0;
}
