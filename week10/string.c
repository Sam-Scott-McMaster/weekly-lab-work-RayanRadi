/* Demonstration of strings (a.k.a. null-terminated character arrays)
 *
 * Sam Scott, McMaster University, 2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
    char s[100] = "hello";
    char *t = "goodbye"; // t is immutable
    char u[] = {'h', 'i', '!', '\0'};

    printf("strings: %10s %10s %10s\n", s, t, u);
    printf("sizeof:  %10lu %10lu %10lu\n", sizeof(s), sizeof(t), sizeof(u));
    printf("strlen:  %10lu %10lu %10lu\n", strlen(s), strlen(t), strlen(u));

    s[0] = 'H';
    //t[0] = 'G'; // segmentation fault (t is immutable)
    u[0] = 'H';

    printf("strings: %10s %10s %10s\n", s, t, u);
}
