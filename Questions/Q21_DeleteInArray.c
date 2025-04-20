// Delete a selected position element and don't change the order in Array
#include <stdio.h>
#include <stdlib.h>

void deleteArrayElement(int arr[], int pos, int *size) { // Added size as a pointer to modify it
    if (pos < 0 || pos >= *size) { // Check for invalid position
        printf("Invalid Position\n");
        return;
    }
    for (int i = pos; i < *size - 1; i++) { // Shift elements to the left
        arr[i] = arr[i + 1];
    }
    (*size)--; // Decrease the size of the array
}

int main() {
    int arr[] = {12, 45, 67, 89, 56, 788, 98, 4}, pos;
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("The position(index) you want to delete\n");
    scanf("%d", &pos);
    deleteArrayElement(arr, pos, &size); // Pass size as a pointer
    for (int i = 0; i < size; i++) { // Use updated size
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}