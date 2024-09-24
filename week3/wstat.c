
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    double total_chars = 0;
    double total_words = 0;
    char word[100];

    // Read words from stdin, one word at a time
    while (scanf("%s", word) != EOF) {
        total_chars += (double)strlen(word);  // Add the length of the word to total_chars
        total_words += 1.0;  // Count each word, incrementing total_words as a double
    }

    // Error handling
    if (total_words == 0) {
        fprintf(stderr, "Error: No words found\n");
        return EXIT_FAILURE;
    }

    // Compute the average word length
    double avg_word_length = total_chars / total_words;

    // Print the average word length, rounded to 1 decimal place
    printf("Average word length: %.1f\n", avg_word_length);

    return EXIT_SUCCESS;

}
