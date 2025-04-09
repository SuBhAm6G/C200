#include <stdio.h>
#include <stdlib.h>
#define MAX 50
void Pascal(int n){
    int line;
    int triangle[MAX][MAX];
    for (int line = 0; line <= n; line++)
    {
        //Initialising end values
        triangle[line][0]=1;
        triangle[line][line]=1;

        for (int j = 1; j <= line; j++)
        {
            triangle[line][j]=triangle[line-1][j-1]+triangle[line-1][j];
        }
        
    }
    
    for (int line = 0; line < n; line++)
    {
        for (int space = 0; space < n - line - 1; space++) {
            printf(" ");
        }
        

        for (int j = 0; j <= line; j++)
        {
            printf("%d ", triangle[line][j]);
        }
        printf("\n");
        
    }
    
}

int main() {
    Pascal(6);
    return 0;
}
