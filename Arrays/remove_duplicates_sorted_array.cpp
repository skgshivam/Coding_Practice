#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int remove_duplicate(int *arr, int n){
   
   int size=1;
   for(int i=1;i<n;i++){
       if(arr[size-1]!=arr[i]){
           arr[size]=arr[i];
           size++;
       }
   }
   return size; 
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<remove_duplicate(arr, n)<<endl;

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";


    return 0;
}