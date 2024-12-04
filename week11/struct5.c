/* An array of structs.
 *
 * Sam Scott, McMaster University, 2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
    struct Student {
        char name[100];
        int grade;
    };

    int n;
    printf("How many students? ");
    scanf("%d", &n);
    struct Student students[n];

    char buffer[1000];
    // iterate with counter
    for (int i=0; i<n; i++) {
        fgets(buffer, 999, stdin); // clear input buffer after scanf
                                   
        printf("Student %d Name: ", i);
        fgets(students[i].name, 99, stdin);
        students[i].name[strlen(students[i].name)-1]='\0'; // remove /n character
        
        printf("Student %d Grade: ", i);
        scanf("%d", &students[i].grade);
    }

    // iterate with pointer
    struct Student *p;
    for (struct Student *p = students; p < students + n; p++) {
        printf("%s: %d\n",p->name, (*p).grade);  // p-> and (*p). are equivalent
    }
}
