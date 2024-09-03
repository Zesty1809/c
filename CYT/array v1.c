/*
    Wap to insert an element in an array
*/

int insert(int a, int currentIndex, int *array);

#include <stdio.h>

int main(void) {
    int array[10], currentIndex = -1;

    currentIndex = insert(3, currentIndex, array);
    currentIndex = insert(5, currentIndex, array);
    currentIndex = insert(7, currentIndex, array);

    // Print the array
    for (int i = 0; i <= currentIndex; i++) {
        printf("%d ", array[i]);
    }
}

int insert(int element,int currentIndex, int *array) {
    if (currentIndex < 9) {
        currentIndex = currentIndex + 1;
        array[currentIndex] = element;
    } else {
        printf("Array is full\n");
    }

    return currentIndex;
}