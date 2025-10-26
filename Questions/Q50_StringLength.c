/*
Q50. Write a program to find the length of a string without using the strlen() function.
*/

#include <stdio.h>

int main() {
    char s[100];
    int i;

    printf("Enter a string: ");
    scanf("%s", s);

    for (i = 0; s[i] != '\0'; ++i);

    printf("Length of string: %d\n", i);

    return 0;
}
