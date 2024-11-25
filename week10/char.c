#include <stdio.h>
#include <stdlib.h>

void main() {
    char c = 'a';

    printf("%lu\n", sizeof(char));
    printf("printf %%c: %c\n", c);
    printf("printf %%d: %d\n", c);

    c = c + 1;
    printf("printf %%c: %c\n", c);
    printf("printf %%d: %d\n", c);

    putchar(c);
    putchar('\n');

    char *s = "hello!";
    printf("printf %%s: %s\n", s);
}
