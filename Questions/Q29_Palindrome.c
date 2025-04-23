//Write a C program to Check whether a given String is Palindrome or not.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Palindrome(char str[], int low, int high){
   if (low>=high)
   {
    printf("It's Palindrome\n");
    return;
   }
   if (str[low]!=str[high])
   {
    printf("It's not palindrome");
    return;
   }
   Palindrome(str, low+1, high-1);
   
}

int main() {
    char str[50];
    printf("Enter your string\n");
    scanf("%s", str);
    Palindrome(str, 0, strlen(str)-1);

    return 0;
}