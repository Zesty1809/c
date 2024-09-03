/*
    Wap to reverse the elements of an array
*/

#include <stdio.h>

#define SIZE 5

int main() {
    int array[SIZE] = {1, 2, 3, 4, 5}, temp;

    // Print the array before reversing
    printf("The elements of array before reversing are: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }

    // Reverse the array
    for (int i = 0; i < SIZE / 2; i++) {
        temp = array[i];
        array[i] = array[SIZE - i - 1];
        array[SIZE - i - 1] = temp;
    }

    // Print the reversed array
    printf("\n\nThe elements after reversing the array are: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}