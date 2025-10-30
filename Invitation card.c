#include <stdio.h>

int main(void) {
    const char *title = "Starbucks Invitation";
    const char *name = "Guest Name";
    const char *date = "Saturday, Nov 15, 2025";
    const char *time = "4:00 PM – 6:00 PM";
    const char *location = "Starbucks Reserve, 123 Coffee Ln, City";

    // Card width for simple ASCII art
    int width = 60;
    // helper lambda substitute (not real lambda in C, just formatting)
    printf("%.*s
", width, "");
    printf("*%*s*
", width-2, title);
    printf("%.*s
", width, "");
    printf("Name: %s
", name);
    printf("Date: %s
", date);
    printf("Time: %s
", time);
    printf("Location: %s
", location);
    printf("%.*s
", width, "");
    printf("RSVP: Please respond by email@example.com
");
    printf("%.*s
", width, "");

    return 0;
}
