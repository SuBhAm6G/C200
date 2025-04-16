// Text Analyzer:
// Write a C program that reads a text file (e.g. a poem or article)
// Analyze the text and calculate:
//      Number of characters (excluding whitespace)
//      Number of words (delimited by whitespace)
//      Number of lines
//      Number of unique words(solution not given, will update later)
//      Display the calculated statistics on the console.
//      Count the occurrences of specific words (provided by the user) in the text file.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp;
    fp=fopen("example.txt", "r");
    if (fp==NULL)
    {
        perror("File doesn't exist");
        exit(-1);
    }
    char ch;//character assigned for counting characters excluding whitespace
    int count_char=0;
    int count_word=0;
    int count_lines=0;
    int inside_word=1;
    char word[20];
    int word_count=0;
    printf("Please enter the word you want to count for\n");
    scanf("%s", &word);
    fseek(fp,0,SEEK_SET);
    while ((ch=getc(fp))!=EOF)
    {
        if (ch!=' ' && ch!='\n' && ch!='\t')
        {
            count_char++;
            if (inside_word)
            {
                inside_word=0;
                count_word++;
            }
            

        }
        else {
            inside_word=1;
            if (ch=='\n')
            {
                count_lines++;
            }
            
        }
    }
    fseek(fp,0,SEEK_SET);//to set pointer at start of file
    char word_check[20];
    while (fscanf(fp, "%s", word_check)!=EOF)
    {
        if (strcmp(word_check, word)==0)
        {
            word_count++;
        }
        
    }
    
    printf("The number of characters in the text file excluding white space is = %d\n", count_char);
    printf("The number of words in the text file delimited by white space is = %d\n", count_word);
    printf("The number of lines in the text file is = %d\n", count_lines+1);
    printf("The number of specific word in the text file is = %d\n", word_count);
    
    return 0;
}
