// WAP to find maximum and minumum element of a given array

#include <stdio.h>

int main() {
    int arr[5] = {4, 7, 3, 12, 1};
    int i, min, max;

    max = min = arr[0];
    for (i = 1; i < 5; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
        
        if (min > arr[i]) {
            min = arr[i];
        }
    }

    printf("Max: %d \t Min: %d \t", max, min);

    return 0;
}