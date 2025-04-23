//Write a C program to convert a decimal number to binary using recursion
#include <stdio.h>
#include <stdlib.h>

int deci_to_binary(int n){
    if(n==0)
        return 0;
    else
        return (n%2 + 10*deci_to_binary(n/2));
}

int main() {
    int n;
    printf("The value of decimal is = ");
    scanf("%d", &n);
    printf("%d",deci_to_binary(n));
    return 0;
}