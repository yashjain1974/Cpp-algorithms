#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printarray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int start = low;
    int end = high;
    while (start < end)
    {

        while (arr[start] <= pivot)
        {

            start++;
            if (start > end)
            {
                goto end;
            }
        }
        while (arr[end] > pivot)
        {

            end--;
        }
        if (start < end)
        {

            swap(arr[start], arr[end]);
        }
    }
end:
    swap(arr[low], arr[end]);

    return end;
}

void quicksort(int arr[], int low, int high)
{

    int location;
    if (low < high)
    {
        location = partition(arr, low, high);
        quicksort(arr, low, location - 1);
        quicksort(arr, location + 1, high);
    }
}
int main()
{
    int A[] = {27,38,12,39,27,16};
    int n = 6;
    printarray(A, n);
    quicksort(A, 0, n);
    printarray(A, n);
}