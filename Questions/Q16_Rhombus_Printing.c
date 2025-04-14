#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10
int main() {
    char str[MAX];
    scanf("%s", str);
    int len=strlen(str);
    for (int i = 0; i < len; i++)//for loop for upper triangle
    {
        for (int j = 0; j < len-i; j++)//for spaces
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)//for char printing
        {
            printf("%2c", str[k]);//%2c for 2 spaces
        }
        printf("\n");
    }
    for (int i = len-1; i >=0 ; i--)//for lower triangle
    {
        for (int j = 0; j <= len-i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            printf("%2c", str[k]);
        }
        printf("\n");
    }
    
    return 0;
}