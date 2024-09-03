#include <stdio.h>

void swap(int *numa, int *numb);

void main() {
    int a, b;

    printf("Enter the values of a and b: ");
    scanf("%d %d", &a, &b);

    printf("\nThe values of a and b before swapping are: %d %d\n", a, b);

    swap(&a, &b);

    printf("The values of a and b after swapping are: %d %d", a, b);
}

void swap(int *numa, int *numb) {
    int temp;
    temp = *numa;
    *numa = *numb;
    *numb = temp;
}