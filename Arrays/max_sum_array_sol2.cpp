#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int max_sum_array(int *arr, int n)
{   
    int res = arr[0];
    int max_sum = arr[0];
    
    for(int i=1;i<n;i++){
        max_sum = max_sum + arr[i] > arr[i] ? max_sum + arr[i] : arr[i];
        res = res > max_sum ? res : max_sum ;
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