// WAP to take 10 numbers from keyboard and find the sum, product and average.

#include <stdio.h>

int main() {
    int arr[10], sum = 0, product = 1; 
    float average = 0;

    printf("Enter 10 numbers: \n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
        product *= arr[i];
    }

    average = sum / 10.0;

    printf("Sum: %d \t Product: %d \t Average: %.2f \n", sum, product, average);

    return 0;
}