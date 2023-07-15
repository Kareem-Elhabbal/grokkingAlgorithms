#include <stdio.h>
#include <stdlib.h>
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        swap(&arr[min_idx], &arr[i]);
    }
}

int main()
{
    int arr[] = {5,3,6,2,10};
    int i, n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: \n");
    selectionSort(arr, n);
    printf("\nSorted array in Ascending order: \n");
     for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
        printf("\n");
    return 0;
}
