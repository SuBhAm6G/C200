#include <stdio.h>
#include <stdlib.h>

// Function to print the array
void printArray(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Merge function to merge two sorted halves and count inversions
void merge(int arr[], int low, int mid, int high, int* inversions) {
    int temp[high+1];
    int i=low, j=mid+1, k=0;
    while (i<=mid && j<=high)
    {
        if (arr[i]<arr[j])
        {
            temp[k++]=arr[i++];
        }
        else{
            temp[k++]=arr[j++];
            (*inversions)++;
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
    for (int i = low, k=0 ; i <= high; i++,k++)
    {
        arr[i]=temp[k];
    }
}


// Merge Sort function
void mergeSort(int arr[], int low, int high, int* inversions) {
    if (low < high) {
        int mid = low + (high - low) / 2;
        mergeSort(arr, low, mid, inversions);
        mergeSort(arr, mid + 1, high, inversions);
        merge(arr, low, mid, high, inversions);
    }
}

int main() {
    int arr[] = {34, 78, 12, 45, 67, 23, 11, 56};
    int arr_size = sizeof(arr) / sizeof(arr[0]);// (8*4)/4
    int inversions = 0;

    printf("Given array is: \n");
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1, &inversions);

    printf("\nSorted array is: \n");
    printArray(arr, arr_size);
    printf("Inversions: %d\n", inversions);

    return 0;
}
