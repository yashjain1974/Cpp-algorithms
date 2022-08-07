#include <stdio.h>

void printarray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void merge(int arr[], int low, int mid, int high)
{
    int B[200];
    int i, j, k;
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            B[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            B[k] = arr[j];
            j++;
            k++;
        }
        
    }
    while (i <= mid)
    {
        B[k] = arr[i];
        k++;
        i++;
    }

    while (j <= high)
    {
        B[k] = arr[j];
        k++;
        j++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = B[i];
    }
}
void mergesort(int arr[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergesort(arr, low, mid);
        
        mergesort(arr, mid + 1, high);
        
        merge(arr, low, mid, high);
    }
}
int main()
{

    // int A[] = {9, 14, 4, 8, 7, 5, 6};
    int A[] = {21, 1, 26, 45, 29, 28, 0, 9, 16, 49, 39, 13, 43, 34, 43, 40};
    int n = 15;
    printarray(A, n);
    mergesort(A, 0, n);
    printarray(A, n);
    return 0;
}