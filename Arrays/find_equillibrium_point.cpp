#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool find_equillibruim_point(int *arr, int n)
{
    int sum =0, p_sum=0, s_sum=0;
    for(int i=0;i<n;i++)
        sum+=arr[i];

    for(int i=0;i<n;i++){
        s_sum=sum-p_sum;
        p_sum+=arr[i];
        
        if(p_sum==s_sum){
            cout<<i<<endl;        
            return true;
        }
            
    }    
    return false;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    // cin>>sum;

    cout<<find_equillibruim_point(arr, n); 

    return 0;
}