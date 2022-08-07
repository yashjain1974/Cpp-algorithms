#include<bits/stdc++.h>
using namespace std;

void printarray(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubblesort(int *arr,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j+1],arr[j]);
            }
        }
    }
    

}
int main(){
    int arr[]={45,32,67,55,23,66,54,55,66,100,88};
    printarray(arr,11);
    bubblesort(arr,11);
    printarray(arr,11);


}