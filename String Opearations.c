#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello";
    char str2[20] = "World";

    printf("Length of str1: %lu\n", strlen(str1));

    strcat(str1, str2);
    printf("Concatenated: %s\n", str1);

    strcpy(str1, "C Language");
    printf("Copied string: %s\n", str1);

    printf("Compare: %d\n", strcmp("abc", "abc")); // returns 0 if equal

    return 0;
}
