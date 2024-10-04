// WAP to calculate the sum or product of
// (a)first 100 natural numbers
// (b)first 25 even natural numbers
// (c)odd numbers between 30 and 90

#include <stdio.h>

int main() {
    int i, sum, evensum, oddsum, c;
    sum = evensum = oddsum = c = 0;

    for(i = 1; i <= 100; i++) {
        sum += i;
    }

    for(i = 1; i <= 100; i++) {
        if ((i % 2) == 0) {
            evensum += i;
            c++;
        }
        if (c >= 25) {
            break;
        }
    }

    c = 0;
    for(i = 1; i <= 100; i++) {
        if ((i % 2) != 0) {
            oddsum += i;
            c++;
        }
        if (c >= 30) {
            break;
        }
    }

    printf("Sum: %d \t Evensum: %d \t Oddsum: %d \t", sum, evensum, oddsum);

    return 0;
}