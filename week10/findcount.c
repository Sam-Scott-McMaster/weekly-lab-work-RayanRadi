#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 9999

int find_count(char *s, char key, char **first) {
    *first = NULL;
    int count = 0;
    for (; s < s + strlen(s); s++) {
        if (*s == key) {
            count += 1;
            if (*first == NULL)
                *first = s;
        }
    }
    return count;
}

int main() {
    char *s = "The quick brown fox jumps over the lazy dogs.";
    char *where;
    int count = find_count(s, 's', &where);

    printf("found %d occurrences\n", count);
    printf("%s\n", where);
}
