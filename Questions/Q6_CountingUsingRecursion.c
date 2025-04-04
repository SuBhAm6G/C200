// Write a C program for counting number of digits recursively.
#include <stdio.h>
#include <stdlib.h>

int Count(int num){
    if (num<10)
    {
        return 1;
    }
    else {
        num=num/10;
        return 1+Count(num);
    }
    
}
int main() {
    int num;
    scanf("%d", &num);
    printf("%d", Count(num));
    return 0;
}