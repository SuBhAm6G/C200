// Write a C program to Check whether a given String is Palindrome or not using recursion.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20

int Palindrome(char str[], int low, int high){
    if (low<=high)
    {
        if (str[low]==str[high])
        {
            return 1*Palindrome(str,low+1,high-1);
        }
        else{
            return 0;
        }
        
    }
    else{
    return 1;
    }
}

//ANOTHER APPROACH
/*void palindrome(char str[], int low, int high) {
    if (low >= high) {
      printf("Palindrome\n");
      return;
    }
    if (str[low] != str[high]) {
      printf("Not a palindrome\n");
      return;
    }
    palindrome(str, low + 1, high - 1);
  }
*/

int main() {
    char str[MAX];
    printf("Please give input of word\n");
    scanf("%s", str);
    int len=strlen(str);
    if (Palindrome(str,0,len-1))
    {
        printf("It's Palindrome");
    }
    else{
        printf("It's not palindrome");
    }
    

    return 0;
}