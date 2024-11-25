#include <stdio.h>
#include <stdlib.h>
#include "string_utilities.h"

#define INPUT_SIZE 100

int main() {
    char input[INPUT_SIZE + 1];

    while (fgets(input, INPUT_SIZE, stdin)) {
        char *trimmed = trim(input);
        if (trimmed) {
            to_upper(trimmed);
            printf("Uppercase: %s\n", trimmed);  // Add a newline after printing uppercase

            char *lower = to_lower_pure(trimmed);
            if (lower) {
                printf("Lowercase: %s\n", lower);  // Add a newline after printing lowercase
                free(lower);
            } else {
                fprintf(stderr, "Memory allocation failed!\n");
            }

            free(trimmed);
        } else {
            fprintf(stderr, "Memory allocation failed!\n");
        }
    }

    return 0;
}
