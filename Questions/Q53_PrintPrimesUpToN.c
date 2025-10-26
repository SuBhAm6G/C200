/*
Q53. Write a program to print all prime numbers up to a given number.
*/

#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Prime numbers up to %d are: ", n);

    for (i = 2; i <= n; i++) {
        isPrime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
