//Take a string input from a file and count number of numeric digits,small and capital letters.
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int upper=0,lower=0,digit=0;
    char file[10];
    printf("Enter the file name:");
    scanf("%s", file);
    fp=fopen(file,"r");
    char ch;
    while((ch=fgetc(fp))!=EOF){
        if(ch>='0' && ch<='9'){
            digit++;
        }
        if(ch>='a' && ch<='z'){
            lower++;
        }
        if(ch>='A' && ch<='Z'){
            upper++;
        }
    }
    fclose(fp);
    printf("Digits:%d\nUpper:%d\nLower:%d", digit, upper, lower);
    return 0;
}