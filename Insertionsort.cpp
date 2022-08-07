#include<iostream>
using namespace std;

void printarray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertion(int arr[],int n){
    int key,j;
    for(int i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;



        }
        arr[j+1]=key;


    }



}
int main(){
  int A[] = {21, 1, 26, 45, 29, 28, 0, 9, 16, 49, 39, 13, 43, 34, 43, 40};
    int n = 15;
    printarray(A, n);
    insertion(A, n);
    printarray(A, n);
    

}