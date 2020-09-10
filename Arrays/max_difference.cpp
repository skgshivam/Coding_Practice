#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int max_differnece(int *arr, int n)
{
    int res = arr[1]-arr[0];
    int min = arr[0];

    for(int i=1;i<n;i++){
        res = res > (arr[i]-min) ? res : arr[i]-min ;
        min = min > arr[i] ? arr[i] : min ;
    }

    return res;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    cout<<max_differnece(arr, n); 

    return 0;
}