//Write a C program to find the sum of digits of a number using recursion.
#include <stdio.h>
#include <stdlib.h>
int sum_of_digits(int n){
    if (n==0)
    {
        return 0;
    }
    else{
        int rem=n%10;
        return rem+sum_of_digits(n/10);
    }
    
}
int main() {
    printf("%d", sum_of_digits(556));
    return 0;
}