// You need to implement a function that sorts an array of integers using the merge sort algorithm. 
#include <stdio.h>
#include <stdlib.h>
#define MAX 20

void InputArray(int *arr, int len){
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }
    
}

void PrintArray(int *arr, int len){
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    
}


void Merge(int arr[], int low, int mid, int high){
    int i=low, j=mid+1, k=0, temp[high+1];
    while (i<=mid && j<=high)
    {
        if (arr[i]<arr[j])
        {
            temp[k++]=arr[i++];
        }
        if (arr[i]>arr[j])
        {
            temp[k++]=arr[j++];
        }
    }

    while (i<=mid)
    {
        temp[k++]=arr[i++];
    }
    while (j<=high)
    {
        temp[k++]=arr[j++];
    }
    for (int i = low, k=0; i <= high; i++,k++)
    {
        arr[i]=temp[k];
    }
    
}

void MergeSort(int arr[], int low, int high){
    if (low<high)
    {
        int mid;
        mid=(low+high)/2;
        MergeSort(arr, low, mid);
        MergeSort(arr,mid+1,high);
        Merge(arr, low, mid, high);
    }
    
}
int main() {
    int n;
    printf("Input number of elements = ");
    scanf("%d", &n);
    int *arr=(int*)malloc(n*sizeof(int));
    if (arr==NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter the elements of array separated by a space \n");
    InputArray(arr,n);
    MergeSort(arr, 0, n-1);
    printf("The Sorted Array is \n");
    PrintArray(arr, n);

    free(arr);

    return 0;
}
