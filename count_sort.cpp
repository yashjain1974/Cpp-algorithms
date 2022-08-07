#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void count_sort(char arr[]){
    int output[strlen(arr)];
    int count[256];
    memset(count,0,sizeof(count));
    for(int i=0;i<arr[i];i++){
        count[arr[i]]++;
    }

    for(int i=1;i<=255;i++){
        count[i]+=count[i-1];
    }

    for(int i=0;arr[i];i++){
        output[count[arr[i]]-1]=arr[i];
        count[arr[i]]--;
    }

    for(int i=0;arr[i];i++){
        arr[i]=output[i];
    }
}

int main(){
    char arr[]="cbaydsfbsjg";
    count_sort(arr);
    cout<<arr;
}