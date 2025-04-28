//Write a program to find occurence of a particular letter(both caps) in a txt file.
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp; int count=0; char letter;
    char file[30];
    printf("Please enter the file name\n");
    scanf("%s", file);
    // getchar();
    printf("Please enter the letter you want to count\n");
    scanf(" %c", &letter);
    fp=fopen(file, "r");
    if (fp==NULL)
    {
        perror("ERROR");
    }
    char ch;
    while ((ch=fgetc(fp))!=EOF)
    {
       if (ch==letter||ch==(letter^32))
       {
        count++;
       }
       
        
    }
    fclose(fp);
    printf("\n%d",count);
    
    return 0;
}