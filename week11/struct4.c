/* Structs variables hold values, not pointers.
 *
 * Sam Scott, McMaster University, 2024
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[100];
    int grade;
} Student;

Student foo(Student s) {
    s.grade += 1;
    strcpy(s.name, "Kira");
    Student t = s;
    return t;
}

void main() {
    Student student;

    strcpy(student.name, "Sam Scott");
    student.grade = 85;
    printf("Before Call... %s: %d\n",student.name, student.grade);

    Student student2 = foo(student);

    printf("After Call...  %s: %d\n",student.name, student.grade);
    printf("Returned...    %s: %d\n",student2.name, student2.grade);
}
