#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool has_upper(const char* pass) {
    for (int i = 0; pass[i]; i++) {
        if (isupper(pass[i])) return true;
    }
    return false;
}

bool has_lower(const char* pass) {
    for (int i = 0; pass[i]; i++) {
        if (islower(pass[i])) return true;
    }
    return false;
}

bool has_digit(const char* pass) {
    for (int i = 0; pass[i]; i++) {
        if (isdigit(pass[i])) return true;
    }
    return false;
}

bool has_special(const char* pass) {
    for (int i = 0; pass[i]; i++) {
        if (!isalnum(pass[i])) return true;
    }
    return false;
}

void check_strength(const char* pass) {
    int len = strlen(pass);
    bool upper = has_upper(pass);
    bool lower = has_lower(pass);
    bool digit = has_digit(pass);
    bool special = has_special(pass);
    
    printf("Password: %s
", pass);
    
    if (len < 8 || !upper || !lower || !digit || !special) {
        printf("Weak
");
        if (len < 8) printf("- Length too short
");
        if (!upper) printf("- Needs uppercase
");
        if (!lower) printf("- Needs lowercase
");
        if (!digit) printf("- Needs digit
");
        if (!special) printf("- Needs special char
");
    } else if (len >= 12) {
        printf("Strong
");
    } else {
        printf("Moderate
");
    }
}

int main() {
    char pass[100];
    printf("Enter password: ");
    fgets(pass, sizeof(pass), stdin);
    pass[strcspn(pass, "
")] = 0;  // Remove newline
    
    check_strength(pass);
    return 0;
}
