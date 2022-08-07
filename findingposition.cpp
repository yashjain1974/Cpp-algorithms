#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int bin(vector<int> &vec, int target, int low, int high){
    int mid;
    mid=(low+high)/2;

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

vector<int> searchRange(vector<int> &vec, int target)
{
    vector<int> vec2;
    int mid = bin(vec,target,0,vec.size());
    if(mid!=-1){
    
    
            int count = mid;
            int k = mid;
            if (vec[k + 1] == target && vec[k - 1] == target)
            {
                if (vec[k - 1] == target)
                {
                    while (vec[k] == target)
                    {
                        k -= 1;
                        count -= 1;
                        if (vec[k] < target)
                        {
                            break;
                        }
                    }
                }
                mid=count+1;
                vec2.push_back(mid);
                k=count+1;
                
                if (vec[k + 1] == target)
                {
                    while (vec[k] == target)
                    {
                        k += 1;
                        count += 1;
                        if (vec[k] > target)
                        {
                            break;
                        }
                    }
                }
                
                 
                vec2.push_back(count);
                return vec2;
            }
           
            else if (vec[k + 1] == target)
            {
                while (vec[k] == target)
                {

                    k += 1;
                    count += 1;
                
                    if (vec[k] > target)
                    {
                        break;
                    }
                    else if (vec[k] < target)
                    {
                        break;
                    }
                }
                vec2.push_back(mid);
                vec2.push_back(count - 1);
                return vec2;
            }
            else if (vec[k - 1] == target)
            {
                while (vec[k] == target)
                {

                    k -= 1;
                    count -= 1;
                
                    if (vec[k] > target)
                    {
                        break;
                    }
                    else if (vec[k] < target)
                    {
                        break;
                    }
                }
                vec2.push_back(count + 1);
                vec2.push_back(mid);
                return vec2;
            }
    }
    else{
        vec2.push_back(-1);
        vec2.push_back(-1);
        return vec2;
    }
           
        }
        


int main()
{
    vector<int> vec = {5, 7,7, 7, 8,8,8,8,8,8,8,8, 8,9,9,9,9,9,9,9,9,9, 10,10};
    int target =9;
    vector<int> vec1=searchRange(vec, target);
    for(int i=0;i<2;i++){
        cout<<vec1[i]<<" ";
    }
}