#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int max_sum_array(int *arr, int n)
{   
    int res = arr[0];
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            res = res > sum ? res : sum ;
        }
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    cout<<max_sum_array(arr, n); 

    return 0;
}