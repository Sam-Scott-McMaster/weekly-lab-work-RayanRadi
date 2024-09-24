#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    char buffer[100];  

    while (true) {
        
        int result = scanf("%99s", buffer);

        if (result == EOF) {
            break;
        }

        if (result == 0) {
            fprintf(stderr, "Bad Value\n");
            return EXIT_FAILURE;
        }

       
        printf("%s\n", buffer);
    }

    return EXIT_SUCCESS;
}
