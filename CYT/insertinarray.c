/*
    Wap to insert element in an array
*/

#include <stdio.h>

int main(void) {
    int array[100], n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter elements one by one: ");
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("The elements of the array are: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
} 