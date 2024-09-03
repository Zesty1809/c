/*
    Wap to calculate simple interest.
*/

#include <stdio.h>

int main(void) {
    float p, si;
    int r, t;

    printf("Enter the principle: ");
    scanf("%f", &p);

    printf("\nEnter the rate: ");
    scanf("%d", &r);

    printf("\nEnter the time: ");
    scanf("%d", &t);

    si = (p * r * t) / 100;

    printf("\nThe simple interest on Rs %.2f is %.2f", p, si);

    return 0;
}