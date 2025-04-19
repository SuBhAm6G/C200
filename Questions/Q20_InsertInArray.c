//Make a function that inserts a element in the array in any given position without shifting their order
#include <stdio.h>
#include <stdlib.h>

    void InsertArray(int *arr, int val, int pos, int n);//just pass array as pointer
int main() {
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int *arr=(int*)malloc((n+1)*sizeof(int));//allocating extra space for extra element insertion
    printf("Enter elements of array\n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the value you enter at which position\n");
    int val, pos;
    printf("Enter value: ");
    scanf("%d",&val);
    printf("Enter position: ");
    scanf("%d",&pos);
    InsertArray(arr, val, pos, n);

    for (int i = 0; i < n+1; i++)
    {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}

void InsertArray(int *arr, int val, int pos, int n){
    if (pos>n || pos<0)
    {
        printf("Invalid Position\n");
        exit(1);
    }
    int i=n-1;//setting i to upperbound
    while (i>=pos)
    {
        arr[i+1]=arr[i];
        i--;
    }
    arr[pos]=val;
}