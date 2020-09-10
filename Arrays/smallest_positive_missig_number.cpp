#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int missingNumber(int arr[], int n) { 
    
    // Your code here
    int small = 1;
    int index = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            arr[index]=arr[i];
            index++;
        }
    }
    cout<<index<<endl;
    for(int i=0;i<index;i++)
        arr[i]--;
    cout<<index<<endl;
    for(int i=0;i<index;i++){
        cout<<abs(arr[i])<<'*'<<endl;
        if(arr[abs(arr[i])] > 0)
            arr[abs(arr[i])] = -1*arr[abs(arr[i])];
    }
    cout<<index<<endl;
    for(int i=0;i<=index;i++){
        if(arr[i]>0)
            return i+1;
    }
    return index+1;
    cout<<index<<endl;
    
} 

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    cout<<missingNumber(arr, n); 

    return 0;
}