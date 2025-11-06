#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int num) {
    if (num <= 1) return false; // 0 and 1 are not prime
    if (num == 2) return true;  // 2 is prime

    // check divisibility from 2 to sqrt(num)
    int limit = (int)sqrt(num);
    for (int i = 2; i <= limit; i++) {
        if (num % i == 0) {
            return false; // divisible, not prime
        }
    }
    return true; // no divisor found, prime
}

int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (isPrime(number)) {
        printf("%d is a prime number.
", number);
    } else {
        printf("%d is not a prime number.
", number);
    }
    return 0;
}
