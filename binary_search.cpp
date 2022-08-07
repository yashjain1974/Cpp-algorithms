#include <iostream>
using namespace std;

int binarysearch(int *arr, int low, int high, int x)
{
    int mid;
    mid = (low + high) / 2;

    if (low > high)
    {
        return 0;
    }

    else
    {
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
            return binarysearch(arr, low, high, x);
        }
        else
        {
            high = mid - 1;
            return binarysearch(arr, low, high, x);
        }
    }
    return 0;
}
int main()
{
    int arr[] = {11, 12, 13, 24, 35, 56, 67, 83, 97, 100};
    cout << binarysearch(arr, 0, 10, 67) << endl;
}