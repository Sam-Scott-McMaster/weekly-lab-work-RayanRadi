#include <stdio.h>
#include "array_utilities.h"

int main() {
    int array[] = {5, -4, 12, 23, 5, 2, 2, 5, 1};
    int size = sizeof(array) / sizeof(array[0]);

    int key = 5;

    // Test find_index
    int index = find_index(array, size, key);
    if (index != -1) {
        printf("find_index: Key %d found at index %d\n", key, index);
    } else {

        printf("find_index: Key %d NOT FOUND\n", key);
    }

    // Tst find_pointer
    int* pointer = find_pointer(array, size, key);
    if (pointer != NULL) {
        printf("find_pointer: Key %d FOUND, pointed value is %d\n", key, *pointer);
    } else {
        printf("find_pointer: Key %d NOT FOUND\n", key);

    }

    // Test count
    int occurrences = count(array, size, key);
    printf("count: Key %d appears %d times in the array\n", key, occurrences);

    // Test count2d
    int array2d[3][3] = {
        {5, 2, 5},
        {3, 5, 4},
        {5, 7, 8}
    };
    int rows = 3, cols = 3;
    int occurrences2d = count2d(rows, cols, array2d, key);
    printf("count2d: Key %d appears %d times in the 2D array\n", key, occurrences2d);


    return 0;
}
