#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 *
 * */

int readline(char s[], int n) {
    int ch, i=0;
    while ((ch = getchar()) != '\n')
      if (i < n)
          s[i++] = ch;
    s[i] = '\0';
    return n;
}

char *readline2() {
    char *s = malloc(10001);
    int ch, i=0;
    while ((ch = getchar()) != '\n') 
      if (i < 10000) 
          s[i++] = ch;
    s[i] = '\0';
    s = realloc(s, strlen(s)+1);
    return s;
}

void main() {
    char a[100];
    readline(a, 99);
    char *b = readline2();
    printf("%s\n", a);
    printf("%s\n", b);
    char s[100], t[100];
    scanf("%99s",s);
    printf("%s %s\n", s, t);
    fgets(t, 7, stdin);
    printf("%s, %s\n",s, t);
}
