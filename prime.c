#include<stdio.h>
int main () {
    int n, j, isPrime;

    for(n = 100; n <= 1000; n++) {
        isPrime = 1; // Assume n is prime

        for(j = 2; j * j <= n; j++) { // Check divisibility up to sqrt(n)
            if(n % j == 0) {
                isPrime = 0; // n is not prime
                break; // No need to check further
            }
        }

        if(isPrime == 1 && n > 1) { // Print only if n is prime
            printf("%d\n", n);
        }
    }

    return 0;
}
