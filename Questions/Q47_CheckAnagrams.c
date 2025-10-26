/*
Q47. Write a program to check if two strings are anagrams of each other.
Two strings are anagrams if they contain the same characters in the same frequency.
For example, "listen" and "silent" are anagrams.
*/

#include <stdio.h>
#include <string.h>

#define NO_OF_CHARS 256

int main() {
    char str1[100], str2[100];
    int count1[NO_OF_CHARS] = {0};
    int count2[NO_OF_CHARS] = {0};
    int i;

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    if (strlen(str1) != strlen(str2)) {
        printf("The strings are not anagrams.\n");
        return 0;
    }

    for (i = 0; str1[i] != '\0'; i++) {
        count1[(int)str1[i]]++;
        count2[(int)str2[i]]++;
    }

    for (i = 0; i < NO_OF_CHARS; i++) {
        if (count1[i] != count2[i]) {
            printf("The strings are not anagrams.\n");
            return 0;
        }
    }

    printf("The strings are anagrams.\n");

    return 0;
}
