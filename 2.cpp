#include <iostream>
using namespace std;

int binarysearch(int arr[], int low, int high)
{
    int mid;
    high = high - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] != arr[mid + 1] && arr[mid] != arr[mid - 1])
        {
            cout << "Hello4" << endl;
            return arr[mid];
        }

        if (arr[mid] == arr[mid + 1] && (arr[mid] >= arr[mid - 1] || arr[mid] == arr[mid - 1]))
        {
            high = mid - 1;
            if (arr[mid] != arr[mid + 1] || arr[mid] != arr[mid - 1])
            {
                cout << "Hell" << endl;
                return arr[mid];
            }
            else
            {
                low = mid + 1;
                cout << "Hello3" << endl;
                continue;
            }
        }
        else
        {
            low = mid + 1;
            cout << "Hello2" << endl;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int arr[300];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << binarysearch(arr, 0, n);
}
