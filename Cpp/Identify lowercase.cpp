#include <iostream>
#include <cctype> // Required for islower()

int main() {
    char ch;
    std::cout << "Enter a character: ";
    std::cin >> ch;

    // islower() returns a non-zero value (true) if the character is lowercase
    if (std::islower(ch)) {
        std::cout << ch << " is a lowercase letter." << std::endl;
    } else {
        std::cout << ch << " is NOT a lowercase letter." << std::endl;
    }

    return 0;
}
