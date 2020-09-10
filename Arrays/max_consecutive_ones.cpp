#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int max_consecutive_ones(int *arr, int n)
{
    int max_ones = 0;
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==1)
            count++;
        else{
            
            count = 0;
        }
        max_ones = max_ones > count ? max_ones : count ;
    }
    return max_ones;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    cout<<max_consecutive_ones(arr, n); 

    return 0;
}