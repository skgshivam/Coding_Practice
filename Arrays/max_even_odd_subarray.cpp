#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int max_even_odd_subarray(int *arr, int n)
{   
    int res = 1;
    int count = 1;
    for(int i=1;i<n;i++){
        if(arr[i]&1){
            if(! (arr[i-1]&1))
                count++;
            else{
                count = 1;
            }      
        }
        else{
            if(arr[i-1]&1)
                count++;
            else{
                count = 1;
            }    
        }
        res = res > count ? res : count ;
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    cout<<max_even_odd_subarray(arr, n); 

    return 0;
}