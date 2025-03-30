// Write a C program to find GCD of two numbers using recursion.
#include <stdio.h>
#include <stdlib.h>

int GCD(int num1, int num2){
    if (num2==0)
    {
        return num1;
    }

    return GCD(num2, num1%num2);
}

int main(){
    printf("%d", GCD(63, 777));
    return 0;
}
    
