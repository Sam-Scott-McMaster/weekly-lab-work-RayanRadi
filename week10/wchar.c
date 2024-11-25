/* Demonstration of using "wide char" type for unicode characters.
 *
 * For string functions with wide characters, replace "str" with "wcs":
 *     strcpy = wcscpy
 *     strlen = wcslen
 *     etc.
 *
 * Sam Scott, McMaster University, 2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>  // required for "wide" characters and strings
#include <locale.h> // required for full support

void main() {
    char *x = setlocale(LC_ALL, ""); // enables non-English "locales"
                           
    printf("Locale: %s\n", x);

    wchar_t c = L'仺';     // L'' creates a "long" character                 

    printf("size of wchar_t: %lu\n", sizeof(wchar_t));
    printf("printf %%lc: %lc\n", c); //%lc prints a long char
    printf("printf %%d: %d\n", c);

    c = c + 1;
    printf("printf %%lc: %lc\n", c);
    printf("printf %%d: %d\n", c);

    wchar_t *s = L"我累了"; // L"" creates a "long" string
    printf("printf %%ls: %ls\n", s); // %ls prints a long string
    printf("string length: %lu\n", wcslen(s));
                                     
}
