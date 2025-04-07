// Write a C program to find the Kth smallest element in an array using the Merge Sort algorithm.
#include <stdio.h>
#include <stdlib.h>
void MergeSort(int arr[], int low, int high);
void Merge(int arr[], int low, int mid, int high);

void PrintArray(int *arr, int len){
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    
}

int main() {
    int arr[]={18,58,63,17,23,41,58,9,12},k;
    printf("Enter the value of K\n");
    scanf("%d", &k);
    int size=sizeof(arr)/sizeof(arr[0]);
    MergeSort(arr,0,size-1);
    //To print Kth smallest element
    PrintArray(arr,size-1);
    printf("\n%d", arr[k-1]);
   
    return 0;
}


void MergeSort(int arr[], int low, int high){
    if (low<high)
    {
        int mid=(low+high)/2;
            MergeSort(arr, low, mid);
            MergeSort(arr,mid+1,high);
            Merge(arr, low, mid, high);
    }
    
}


void Merge(int arr[], int low, int mid, int high){
    int i=low, j=mid+1, k=0, temp[high+1];
    
        while (i<= mid && j<=high)
        {
            if (arr[i]<=arr[j])
            {
                temp[k++]=arr[i++];
            }
            else{
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
