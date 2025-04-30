//Make a programme that'll ---
// 1. Read numbers from a __FILE_
// 2. Sort them in a descending order using quicksort and count number of passes
// 3. Perform binary search from user input
// 3. Print the sorted array in file in append mode including passes and the index
#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void quicksort(int arr[],int low, int high,int *passes){
    int i,j,pivot;
    if(low<high){
        (*passes)++;
        i=low,j=high,pivot=high;
        while(i<j){
            while(arr[i]>arr[pivot] && i<=high){
                i++;
            }
            while(arr[j]<=arr[pivot] && j>=low){
                j--;
            }
            if(i<j){
                swap(&arr[i],&arr[j]);
            }
        }
        swap(&arr[pivot],&arr[i]);
        quicksort(arr,low,i-1,passes);
        quicksort(arr,i+1,high,passes);
    }

}

int main() {
    FILE *fp;
    if((fp=fopen("Array.txt","r"))==NULL){
        printf("Error opening file\n");
        exit(1);
    }
    int n;
    int arr[20];
    int i=0;
    while (fscanf(fp,"%d", &n)!=EOF)
    {
        arr[i]=n;
        i++;
    }
    printf("Unsorted Array is \n");
    for (int j = 0; j < i; j++)
    {
        printf("%d ",arr[j]);
    }
    int passes=0;
    
    quicksort(arr,0,i-1,&passes);
    printf("\nSorted Array is \n");
    for (int k = 0; k < i; k++)
    {
        printf("%d ",arr[k]);
    }
    printf("\nNumber of passes = %d",passes);

    if((fp=fopen("Array.txt","a"))==NULL){
        printf("Error opening file\n");
        exit(1);
    }
    fprintf(fp,"\nSorted Array ---\n");
    for (int a = 0; a < i; a++)
    {
        fprintf(fp,"%d ",arr[a]);
    }
    fprintf(fp,"\nNumber of passes = %d", passes);
    printf("\nData written succesfully in the file.");
    fclose(fp);
    
    return 0;
}
//will implement binary search later