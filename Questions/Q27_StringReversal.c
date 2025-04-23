// Write a C program to reverse a string using recursion. 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void str_reversal(char str[], int low, int high){
    if(low<=high)
    {
        char temp=str[low];
        str[low]=str[high];
        str[high]=temp;
        str_reversal(str, low+1, high-1);
    }
    
}

int main() {
    char str[30];
    printf("Enter a String you want to reverse\n");
    scanf("%s", str);
    str_reversal(str, 0, strlen(str)-1);
    printf("The reversed string is - %s", str);
    return 0;
}