#include <stdio.h>
#include "digits.h"

int digits(long n, int *max, int *min) {
    *max = 0;
    *min = 9;
    int sum = 0;

    if (n < 0) {
        n = -n;
    }

    if (n == 0) {
        *max = 0;
        *min = 0;
        return 0;
    }

    while (n > 0) {
        int digit = n % 10;
        sum += digit;

        if (digit > *max) {
            *max = digit;
        }
        if (digit < *min) {
            *min = digit;
        }

        n /= 10;
    }

    return sum;
}
