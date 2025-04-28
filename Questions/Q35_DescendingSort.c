//Sort all element in descending order with any sort also printing the number of passes it took

#include <stdio.h>
#include <stdlib.h>

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void bubbleSort(int arr[], int n,int *passes);
void selectionSort(int arr[], int n,int *passes);
void quickSort(int arr[],int low, int high, int *passes);
void mergeSort(int arr[],int low, int high, int *passes);
void mergeArray(int arr[],int low, int mid, int high);

int main(){
    int arr[]={67,98,34,10,32,7,13,67,89,654};
    int size=sizeof(arr)/sizeof(arr[0]);
    int passes=0;
    printf("Array before sorting:\n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Choose a sorting algorithm:\n");
    printf("0. Bubble Sort\n");
    printf("1. Selection Sort\n");
    printf("2. Quick Sort\n");
    printf("3. Merge Sort\n");
    int choice;
    scanf("%d",&choice);
    switch (choice){
    
        
            case 0:bubbleSort(arr,size,&passes);
            break;
            case 1:selectionSort(arr,size,&passes);
            break;
            case 2:quickSort(arr,0,size-1,&passes);
            break;
            case 3:mergeSort(arr,0,size-1,&passes);
            break;
            default:printf("Invalid choice");

    }
        
    printf("Array after sorting:\n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Number of passes: %d\n", passes);

    return 0;
}

void bubbleSort(int arr[], int n,int *passes){
    for (int i = 1; i < n; i++)
    {
        (*passes)++;
        for (int j = 0; j < n-i; j++)
        {
            if(arr[j]<arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
        
    }
    
}

void selectionSort(int arr[], int n,int *passes){
    for (int i = 0; i < n; i++)
    {
        (*passes)++;
        for (int j=i+1; j < n; j++)
        {
            if(arr[i]<arr[j]){
                swap(&arr[i],&arr[j]);
            }
        }
        
    }
    
}

void quickSort(int arr[],int low, int high, int *passes){
    int i,j,pivot;
    if (low<high)
    {
        (*passes)++;
        i=low,j=high,pivot=high;
        while(i<j){
        
            while (arr[i]>arr[pivot])
            {
                i++;
            }
            while (arr[j]<=arr[pivot])
            {
                j--;
            }
            if (i<j)
            {
                swap(&arr[i],&arr[j]);
            }   
        }
    swap(&arr[i],&arr[pivot]);
    quickSort(arr, low,i-1, passes);
    quickSort(arr, i+1, high, passes);
    }
    
}

void mergeSort(int arr[], int low, int high, int *passes) {
    if (low < high) {
        (*passes)++;
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid, passes);
        mergeSort(arr, mid + 1, high, passes);
        mergeArray(arr, low, mid, high);
    }
}

void mergeArray(int arr[], int low, int mid, int high) {
    int a = low, b = mid, c = mid + 1, d = high, temp[high - low + 1], k = 0;
    while (a <= mid && c <= high) {
        if (arr[a] >= arr[c]) { 
            temp[k++] = arr[a++];
        } else {
            temp[k++] = arr[c++];
        }
    }
    while (a <= mid) {
        temp[k++] = arr[a++];
    }
    while (c <= high) {
        temp[k++] = arr[c++];
    }
    for (int i = 0, j=low; i < k; i++) {
        arr[low + i] = temp[i];
    }
}
