/*
Write a program in C to implement a Binary Search function that achieves the following:
The function must handle cases where the array is empty by outputting an error message and terminating the program. When the value is found, the function should return the number of passes taken to locate the value and store its position using a pointer. Additionally, the program should account for scenarios where the value is not found in the array, printing an appropriate error message and terminating execution in such cases. 
*/
#include <stdio.h>
#include <stdlib.h>

int bSearch(int arr[], int size, int val, int *pass){
    int low=0, high=size-1,pos=-1;
    if(size==0){
        printf("Error: Array is empty.\n");
        exit(1);
    }

    while (low<=high)
    {
        (*pass)++;
        int mid=(high+low)/2;
        if (val==arr[mid]){
            pos=mid;
            break;
        }
        else if (val>arr[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    
    if(pos==-1){
        printf("Error: Value not found in the array.\n");
        exit(-1);
    }
    else{
        printf("Value found at index %d after %d passes.\n", pos, *pass);
        return pos;
    }
}

int main() {
    int arr[]={12,56,67,78,89,90,91,92,93,94,95};
    int size=sizeof(arr)/sizeof(arr[0]);
    int val, pass=0;
    printf("Enter the value to search: ");
    scanf("%d", &val);
    bSearch(arr, size, val, &pass);
    return 0;
}