// Write a C program to print string using recursion.

#include <stdio.h>
#include <stdlib.h>

void print(char str[], int i){
    if (str[i]!='\0')
    {
        printf("%c", str[i]);
        print(str, i+1);
    }
    
}

int main() {
    char str[]="Subham Dhar";
    print(str, 0);

    return 0;
}