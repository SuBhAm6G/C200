#include <stdio.h>
#include <stdlib.h>
    void disp(int arr[], int n){
        for (int i = 0; i <n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    void bSort(int arr[], int n){
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < n-i; j++)
            {
                if (arr[j]>=arr[j+1])
                {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
                
            }
            
        }
        
    }
int main() {
    int arr[]={13,67,89,34,23,45,78,90,12,56};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("Array before Sorting\n");
    disp(arr, size);
    bSort(arr, size);
    printf("Array after Sorting\n");
    disp(arr,size);
    return 0;
}