//Write a C program to calculate the sum of numbers from 1 to n using recursion.
#include <stdio.h>
#include <stdlib.h>

int sum(int n){
    if(n<2){
        return n;
        exit(1);
    }
    else{
        return n+sum(n-1);
    }
}

int main() {
    printf("%d", sum(15));
    return 0;
}