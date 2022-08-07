#include<iostream>
#include<math.h>
using namespace std;


void divideandconquer(int n){
    int mid=n;
    int start=0;
    int end=mid;
    while(start<end){
         mid=mid/2;
        int end=mid;
        if(start*start*start>n){
            cout<<start-1<<endl;
            break;
        }
        else{
            mid=start;
        }



        start++;
        }
}

int main(){
int n;
cin>>n;
divideandconquer(n);
//cout<<divideandconquer(n)<<endl;

}

