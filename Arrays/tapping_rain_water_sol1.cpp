#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int tapping_rain_water(int *arr, int n)
{
    int res = 0;
    for(int i=1;i<n-1;i++){
        int lmax=arr[i];
        int rmax=arr[i];
        for(int j=0;j<i;j++)
            lmax = lmax > arr[j] ? lmax : arr[j];
        for(int j=i+1;j<n;j++)
            rmax = rmax > arr[j] ? rmax : arr[j];

        if(lmax < rmax)
            res = res + (lmax - arr[i]);
        else
            res = res + (rmax - arr[i]);    
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    cout<<tapping_rain_water(arr, n); 

    return 0;
}