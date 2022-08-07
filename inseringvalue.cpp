#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binarysearch(vector<int> arr,int low,int high,int x){
    int mid;
    mid=(low+high)/2;

    if(low>high){
        if(arr.back()<x){
            high=arr.size();
                return high;
        }
        else if(arr.front()>x){
            cout<<"Hello"<<endl;
            return 0;
        }
        else if(arr[mid]<x){
            low=mid+1;
            
            return low;
          


        }
        else{
        high=mid-1;
            
           return high;
        }
    }
    
    
    else{
        if(arr[mid]==x){
        return mid;

    }
        else if(arr[mid]<x){
            low=mid+1;
            
           return binarysearch(arr,low,high,x);


        }
        else{
            high=mid-1;
           return binarysearch(arr,low,high,x);
        }
    }
  
    
}

int searchInsert(vector<int> &nums,int target){
    int low=0;
    int high=nums.size();
    return binarysearch(nums,low,high,target);

}
int main(){
   vector<int> vec1={1,3,5,6,7,10,15,28};
    cout<<searchInsert(vec1,28)<<endl;
}