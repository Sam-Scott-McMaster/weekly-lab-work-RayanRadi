#include <stdio.h>
#include <stdlib.h>
#include "digits.h"

int main() {
    int min, max, sum;
    long n;

    // test case
    n = 1234;
    sum = digits(n, &max, &min);
    printf("%ld: sum %d, min %d, max %d\n", n, sum, min, max);
    if (max == 4 && min == 1 && sum == 10) {
        puts("success");
    } else {
        puts("failure");
        return EXIT_FAILURE;
    }

    // Test with n = 0
    n = 0;
    sum = digits(n, &max, &min);
    printf("%ld: sum %d, min %d, max %d\n", n, sum, min, max);
    if (max == 0 && min == 0 && sum == 0) {
        puts("success");
    } else {
        puts("failure");
        return EXIT_FAILURE;
    }

    // Test with a negative number
    n = -9876;
    sum = digits(n, &max, &min);
    printf("%ld: sum %d, min %d, max %d\n", n, sum, min, max);
    if (max == 9 && min == 6 && sum == 30) {
        puts("success");
    } else {
        puts("failure");
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
