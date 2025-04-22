//Sort an array using Insertion Sort and then perform binary search and print its position
#include <stdio.h>
#include <stdlib.h>
void InsertionSort(int *arr,int n){
    for (int i = 0; i < n-1; i++)
    {
        int min_idx=i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[min_idx])
            {
                min_idx=j;
            }
            
        }
        int temp=arr[i];
        arr[i]=arr[min_idx];
        arr[min_idx]=temp;
        
    }
    
}

void BinarySearch(int *arr, int n, int val){
    int pos=-1;
    int low=0,high=n-1;
    while (low<=high)
    {
        int mid=(low+high)/2;
        if (arr[mid]==val)
        {
            pos=mid;
            break;
        }
        if (arr[mid]>val)
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    if (pos==-1)
    {
        printf("You mistyped\n");
    }
    else{
        printf("The Index of %d in sorted array is %d", val, pos);
    }
    
    
    
}
int main() {
    int n,val;
    printf("Input number of elements you want to insert\n");
    scanf("%d", &n);
    int *arr=(int*)malloc(n*sizeof(int));
    printf("Enter elements of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Select the value of element you want index of = ");
    scanf("%d", &val);
    InsertionSort(arr,n);
    printf("The sorted array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    BinarySearch(arr,n,val);
    free(arr);
    return 0;
}