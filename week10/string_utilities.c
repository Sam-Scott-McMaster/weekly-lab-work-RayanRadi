#include <stdlib.h>
#include <string.h>
#include "string_utilities.h"

// Function to convert a string to uppercase
void to_upper(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= ('a' - 'A');
        }
    }
}

// Function to convert a string to lowercase without side effects
char *to_lower_pure(const char *str) {
    int len = strlen(str);
    char *lower_str = malloc(len + 1);
    if (!lower_str) {
        return NULL;
    }

    for (int i = 0; i < len; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            lower_str[i] = str[i] + ('a' - 'A');
        } else {
            lower_str[i] = str[i];
        }
    }
    lower_str[len] = '\0';
    return lower_str;
}

// Function to find the first and last non-whitespace characters in a string
void find_content(const char *str, char **first, char **last) {
    *first = NULL;
    *last = NULL;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            if (*first == NULL) {
                *first = (char *)&str[i];
            }
            *last = (char *)&str[i];
        }
    }

    if (*first == NULL) {
        *first = *last = (char *)&str[strlen(str)];
    }
}

char *trim(const char *str) {
    char *first, *last;
    find_content(str, &first, &last);

    // Check if the string contains only whitespace
    if (first == last && *first == '\0') {
        // Allocate and return an empty string
        char *trimmed = malloc(1);
        if (trimmed) {
            trimmed[0] = '\0';
        }
        return trimmed;
    }

    // Calculate the length of the trimmed content
    int len = (last >= first) ? (last - first + 1) : 0;

    // Allocate memory for the trimmed string
    char *trimmed = malloc(len + 1);
    if (trimmed) {
        strncpy(trimmed, first, len);  // Copy the trimmed content
        trimmed[len] = '\0';          // Null-terminate the string
    }

    return trimmed;
}
