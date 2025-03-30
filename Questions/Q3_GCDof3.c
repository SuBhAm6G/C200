// Write a C program to find GCD of three numbers using recursion.
#include <stdio.h>
#include <stdlib.h>

int GCD(int num1, int num2)
{
    if (num2 == 0)
    {
        return num1;
    }

    return GCD(num2, num1 % num2);
}
int GCD3(int num1, int num2, int num3)
{
    int A = GCD(num1, num2);
    return GCD(A, num3);
}
int main()
{
    // int num1 = 10, num2 = 20, num3 = 25;
    // int A = GCD(num1, num2);
    // printf("The GCD of %d, %d and %d is %d\n", num1, num2, num3, GCD(A, num3));
    printf("%d", GCD3(10, 20, 25));
    return 0;
}
