#include <stdio.h>
#include <string.h>

int main() {
    char text[256];
    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);

    if (strstr(text, "the") || strstr(text, "and")) {
        printf("Language: English
");
    } else if (strstr(text, "le") || strstr(text, "et")) {
        printf("Language: French
");
    } else if (strstr(text, "der") || strstr(text, "und")) {
        printf("Language: German
");
    } else {
        printf("Language: Unknown
");
    }
    return 0;
}
