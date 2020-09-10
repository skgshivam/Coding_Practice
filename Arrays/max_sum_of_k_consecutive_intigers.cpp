#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int max_sum_of_k_consecutive_intigers(int *arr, int n, int k)
{
    int res=0;
    int sum=0;
    for(int i=0;i<k;i++)
        sum+=arr[i];
    res = sum;
    for(int i=k;i<n;i++){
   
        sum-= arr[i-k];
        sum+= arr[i];
        res = res > sum ? res : sum;
    }
    return res;
}
int main(){
    int n, k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>k;

    cout<<max_sum_of_k_consecutive_intigers(arr, n, k); 

    return 0;
}