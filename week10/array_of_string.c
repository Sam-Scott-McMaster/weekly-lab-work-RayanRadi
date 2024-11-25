/* Array of string demonstratoin
 *
 * Sam Scott, McMaster University, 2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 4
#define LENGTH 10

void main(int argc, char argv[][100]) {

    printf("%lu\n", sizeof(argv[0]));
    char words[N][LENGTH]={"word", "what", "where", "why"}; // rectangular: wasteful 
    //char *words[] = {"word", "what", "where", "why"};     // ragged: immutable

    for (int i=0; i<N; i++) 
        printf("%s ",words[i]);
    puts("");

    for (int i=0; i<N; i++)  // Segmentation fault if 'words' is immutable
        words[i][0] = 'W';

    for (int i=0; i<N; i++)
        printf("%s ",words[i]);
    puts("");

    char *a[10];
    char inp[1000];
    for (int i=0; i<10; i++) {
        scanf("%s", inp);
        a[i] = malloc(strlen(inp)+1);
        strcpy(a[i], inp);
    }
    for (int i=0; i<10; i++) {
        printf("%s\n", a[i]);
    }
    for (int i=0; i<10; i++) {
        free(a[i]);
    }
}
