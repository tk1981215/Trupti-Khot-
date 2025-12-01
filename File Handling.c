#include <stdio.h>

int main() {
    FILE *fp;

    // Creating and writing to a file
    fp = fopen("example.txt", "w");
    if (fp == NULL) {
        printf("Error opening file.
");
        return 1;
    }
    fprintf(fp, "Hello, file handling in C!
");
    fclose(fp);

    // Reading from the file
    char buffer[100];
    fp = fopen("example.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.
");
        return 1;
    }
    while (fgets(buffer, sizeof(buffer), fp)) {
        printf("%s", buffer);
    }
    fclose(fp);

    return 0;
}
