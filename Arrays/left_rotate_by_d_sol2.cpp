#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void reverse(int *arr, int start, int end){
    for(int i=start, j=end; start<end; start++, end--){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }
}

void left_rotate_d(int *arr, int n, int d){
   
   reverse(arr, 0, d-1);
   reverse(arr, d, n-1);
   reverse(arr, 0, n-1);
      
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int d;
    cin>>d;
    left_rotate_d(arr, n, d);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";


    return 0;
}