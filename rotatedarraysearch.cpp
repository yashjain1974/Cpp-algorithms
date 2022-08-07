#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int s_search(vector<int> arr, int x, int low, int high)
{
    int mid;
    mid = (low + high) / 2;

    if (low > high)
    {
        return -1;
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
            return s_search(arr, x, low, high);
        }
        else
        {
            high = mid - 1;
            return s_search(arr, x, low, high);
        }
    }

    return 0;
}

int search(vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;
    if(nums.size()==1)
    {
        if(nums[0]==target)
        return 0;

        else
        return -1;
    }
   else{
    int mid = (low + high) / 2;
    if (nums[low] == target)
    {
        return 0;
    }
    else if (target == nums[mid])
    {
        return mid;
    }
    else if (target <= nums[low])
    {
        low = mid-1;

        return s_search(nums, target, low, high);
    }
    else if (target >= nums[low])
    {

        high = mid+1;
        return s_search(nums, target, low, high);
    }
    else
    {
        return -1;
    }
   }
}

int main()
{
    vector<int> arr = {1,3};
    int target = 0;

    cout << search(arr, target) << endl;
}