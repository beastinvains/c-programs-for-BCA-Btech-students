#include <stdio.h>
// Required for the sqrt() function

int main() {
    int num, i, isPrime = 1;

    // Prompt the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Handle edge cases: Numbers <= 1 are not prime
    if (num <= 1) {
        isPrime = 0;
    } else {
        // Check for factors from 2 to the square root of num
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = 0; // Found a factor, so it's not prime
                break;
            }
        }
    }

    // Print the result based on the isPrime flag
    if (isPrime) {
        printf("%d is a prime number.\\n", num);
    } else {
        printf("%d is not a prime number.\\n", num);
    }

    return 0;
}