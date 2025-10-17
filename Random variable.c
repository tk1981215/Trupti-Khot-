#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with current time
    srand(time(NULL));
    
    // Generate and print a random number
    int random_var = rand(); // Value between 0 and RAND_MAX
    printf("%d
", random_var);

    return 0;
}
