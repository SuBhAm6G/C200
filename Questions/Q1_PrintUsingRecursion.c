// Write a C program to print the array elements using recursion.
#include <stdio.h>
#include <stdlib.h>
void PrintArray(int arr[], int size)
{
    static int index = 0;
    if (index >= size)
    {
        return;
    }
    printf("%d ", arr[index]);
    index++;
    PrintArray(arr, size);
}

int main()
{
    int arr[] = {45, 50, 78, 67};
    PrintArray(arr, 4);
    return 0;
}
