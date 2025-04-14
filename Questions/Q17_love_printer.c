#include <stdio.h>
#include <string.h>

void printLoveSymbol(char *str) {
    int len = strlen(str);
    int n = len / 2;
    
    // Upper part of the heart
    for (int i = n / 2; i <= n; i += 2) {
        for (int j = 1; j < n - i; j += 2) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%c", str[j % len]);
        }
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%c", str[j % len]);
        }
        printf("\n");
    }
    
    // Lower part of the heart
    for (int i = n; i >= 1; i--) {
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (i * 2) - 1; j++) {
            printf("%c", str[j % len]);
        }
        printf("\n");
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printLoveSymbol(str);
    return 0;
}
