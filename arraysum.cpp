#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> vec;
    int low=0;
    int high=nums.size()-1;
    while(true){
        if((nums[high]+nums[low])>target){
            high--;

        }
        else if((nums[high]+nums[low])<target){
            low++;
        }
        else if((nums[high]+nums[low])==target){
            vec.push_back(high);
            vec.push_back(low);
            break;

        }
        else if(low<high){
            cout<<"hello";
            break;
        }

    }


return vec;
}
int main(){
    vector<int> nums={2,7,11,15};
    int target=19;

    vector <int> vec=twoSum(nums,target);
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    

}

