/*
Q45. Write a program to check if a number is a power of 2.
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n > 0 && (n & (n - 1)) == 0) {
        printf("%d is a power of 2.\n", n);
    } else {
        printf("%d is not a power of 2.\n", n);
    }

    return 0;
}
