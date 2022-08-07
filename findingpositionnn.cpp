#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int bin(vector<int> &vec, int target, int low, int high){
    int mid;
    mid=(low+high)/2;
      if(vec.empty()){
           cout<<"Hii";
        return -1;
        

    }

    if(low>high){
        return -1;
    }
    
    else{
        if(vec[mid]==target){
        return mid;

    }
        else if(vec[mid]<target){
            low=mid+1;
           return bin(vec,target,low,high);


        }
        else{
            high=mid-1;
           return bin(vec,target,low,high);
        }
    }
    return -1;
}

vector<int> searchRange(vector<int> &nums, int target)
{
    vector<int> vec2;
     
    if(nums.size()==1){
       
        if(nums[0]==target){
            vec2.push_back(0);
    vec2.push_back(0);
    
    return vec2;
        }
        else{
            vec2.push_back(-1);
    vec2.push_back(-1);
return vec2;
        }
        
    }
    else if(nums[0]<target ){
         cout<<"Hii";
        vec2.push_back(-1);
    vec2.push_back(-1);
return vec2;



    }
    else{
    cout<<"Hii";
    int mid = bin(nums,target,0,nums.size()-1);
    int first=bin(nums,target,0,mid);
    int second=bin(nums,target,mid,nums.size()-1);
    vec2.push_back(first);
    vec2.push_back(second);
    return vec2;
    }
    
    
}
      
int main(){
    // vector<int> vec = {5,7,7,8,8,10};
    vector<int> vec = {};
    int target = 0;
    
    vector<int> vec1=searchRange(vec, target);
    cout<<"Hii";
    for(int i=0;i<2;i++){
        cout<<vec1[i]<<" ";
    }

}