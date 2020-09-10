#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void left_rotate_d(int *arr, int n, int d){
   
   int temp[d];
   for(int i=0;i<d;i++)
       temp[i]=arr[i];
   for(int i=d;i<n;i++){
       arr[i-d]=arr[i];
   }    
   for(int i=0;i<d;i++){
       arr[n-d+i]=temp[i];
   }
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