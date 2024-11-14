#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

// The QUICKCHECK macro replaces the quickcheck function to make a quick check 
// if a number is less than 2, improving performance by avoiding a function call.
#define QUICKCHECK(n) ((n) < 2)

// The CHECKFACTOR macro replaces the checkfactor function to check if one 
// number is a factor of another, improving performance by avoiding a function call.
#define CHECKFACTOR(a, b) ((a) % (b) == 0)

// The isprime function checks if a given number is prime.
// By using QUICKCHECK and CHECKFACTOR as macros, we reduce the need for 
// additional function calls, making the program faster.
bool isprime(int n) {
    if (QUICKCHECK(n)) 
        return false;

    for (int factor = 2; factor < n; factor++) 
        if (CHECKFACTOR(n, factor))
            return false;

    return true;
}

// The main function calculates the running time for finding and printing
// prime numbers between -200,000 and 200,000.
// It uses the clock() function to measure the execution time of the prime-checking loop.
void main() {
    long start = clock();
    for (int n = -200000; n <= 200000; n++)
        if (isprime(n)) 
            printf("%d ", n);
    long end = clock();
    
    // Print the time taken to complete the prime-checking loop in seconds.
    printf("\nRunning time: %.4f seconds\n", (float)(end - start) / 1000000);
}
