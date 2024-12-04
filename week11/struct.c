/* Simple struct type example.
 *
 * Sam Scott, McMaster University, 2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
    struct {
        char name[100];
        int grade;
    } s1;

    strcpy(s1.name, "Sam Scott");
    s1.grade = 85;
    printf("%s: %d\n",s1.name, s1.grade);

    struct {
        char name[100];
        int grade;
    } s2;

    printf("Name: ");
    fgets(s2.name, 99, stdin);
    s2.name[strlen(s2.name)-1]='\0';
    printf("Grade: ");
    scanf("%d", &s2.grade);
    printf("%s: %d\n",s2.name, s2.grade);
}
