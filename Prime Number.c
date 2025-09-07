#include <stdio.h>
#include <stdbool.h> // Required for using bool type

// Function to check if a number is prime
bool isPrime(int num) {
    // Numbers less than or equal to 1 are not prime
    if (num <= 1) {
        return false;
    }

    // 2 is the only even prime number
    if (num == 2) {
        return true;
    }

    // If the number is even and greater than 2, it's not prime
    if (num % 2 == 0) {
        return false;
    }

    // Check for odd divisors from 3 up to the square root of num
    // We only need to check up to the square root because if a number
    // has a divisor greater than its square root, it must also have
    // a divisor smaller than its square root.
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) {
            return false; // Found a divisor, so it's not prime
        }
    }

    return true; // No divisors found, so it's prime
}

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
