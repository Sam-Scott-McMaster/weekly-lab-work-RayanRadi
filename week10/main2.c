#include <stdio.h>
#include <stdlib.h>
#include "string_utilities.h"

int main() {
    char s1[] = "   hello labmarker   ";
    char s2[] = "        ";
    char s3[] = "NoWhitespace";
    char *trimmed;

    // Test case 1: "   hello labmarker   "
    trimmed = trim(s1);
    if (trimmed) {
        printf("Trimmed string: '%s'\n", trimmed);
        free(trimmed);
    } else {
        printf("Memory allocation failed!\n");
    }

    // Test case 2: "        "
    trimmed = trim(s2);
    if (trimmed) {
        printf("Trimmed string: '%s'\n", trimmed);
        free(trimmed);
    } else {
        printf("The string contains only whitespace.\n");
    }

    // Test case 3: "NoWhitespace"
    trimmed = trim(s3);
    if (trimmed) {
        printf("Trimmed string: '%s'\n", trimmed);
        free(trimmed);
    } else {
        printf("Memory allocation failed!\n");
    }

    return 0;
}
