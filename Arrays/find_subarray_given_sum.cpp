#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool find_subarray_given_sum(int *arr, int n, int sum)
{
    int start = 0;
    int end = 0;
    int temp_sum =0;

    for(end = 0; end<n ;end++){
        temp_sum+=arr[end];
        while(temp_sum > sum && start<end)
        {
            temp_sum-=arr[start];
            start++;
        }
        if(temp_sum==sum)
            return true;
        
    }
    if(temp_sum==sum)
        return true;
    return false;
    
}

int main(){
    int n, sum;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>sum;

    cout<<find_subarray_given_sum(arr, n, sum); 

    return 0;
}