//Initialize a 1D array and use it as 2d array

#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[6]={1,2,3,4,5,6};
    int *ptr=&arr[0];
    int rows=2,cols=3;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", *(ptr+i*cols)+j);
        }
        printf("\n");
    }
    
    return 0;
}