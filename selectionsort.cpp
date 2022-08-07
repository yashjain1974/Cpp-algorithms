#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printarray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void selectionsort(int arr[],int n){
    int index;
    for(int i=0;i<n-1;i++){
        index=i;
        for(int j=i+1;j<n;j++){
            if(arr[index]>arr[j]){
                index=j;
                }



        }
    swap(arr[i],arr[index]);
    }
    
}

int main(){
int A[] = {21, 1, 26, 45, 29, 28, 0, 9, 16, 49, 39, 13, 43, 34, 43, 40};
    int n = 15;
    printarray(A, n);
    selectionsort(A, n);
    printarray(A, n);
    
}