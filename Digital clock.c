#include <stdio.h>
#include <unistd.h> // for sleep() function

int main() {
    int h = 0, m = 0, s = 0;  // start time
    printf("Simple Digital Clock (Ctrl+C to stop)\n\n");

    while (1) {
        // clear screen
        printf("\033[H\033[J");

        printf("     ==========================\n");
        printf("          %02d : %02d : %02d\n", h, m, s);
        printf("     ==========================\n");

        fflush(stdout);  // flush output
        sleep(1);        // wait 1 second
        s++;

        if (s == 60) {
            s = 0;
            m++;
        }
        if (m == 60) {
            m = 0;
            h++;
        }
        if (h == 24)
            h = 0;
    }
    return 0;
}
