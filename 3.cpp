#include<iostream>
#include<math.h>
using namespace std;

double Euclodiandistance(int *arr){
    double distance;
    distance=sqrt(0+pow((arr[1]-arr[0]),2));
    return distance;
}


int main(){
    int n,K;
    cout<<"How many coordinates you want :";
    cin>>n;
    
    int arr2[2];
    int arr[n][2];
    
    int element;
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>element;
            arr[i][j]=element;
        }
    }
    cout<<"Enter K:";
    cin>>K;
    

    for(int i=0;i<1;i++){
        for(int j=0;j<2;j++){
           arr2[j]=arr[0][j];
           

        }
    cout<<endl;
    
    }
    cout<<Euclodiandistance(arr2)<<endl;




}