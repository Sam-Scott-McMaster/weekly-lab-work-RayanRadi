#include <stddef.h>       
#include "array_utilities.h"

int find_index(int array[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (array[i] == key) {
            return i;
        }
    }
    return -1;
}

int* find_pointer(int array[], int size, int key) {
    for (int *ptr = array; ptr < array + size; ptr++) {
        if (*ptr == key) {
            return ptr;
        }
    }
    return NULL;  
}

int count(int array[], int size, int key) {
    int count = 0;
    int* p = array;
    while ((p = find_pointer(p, size, key)) != NULL) {
        count++;
        size -= (p - array + 1);
        p++;
    }
    return count;
}
