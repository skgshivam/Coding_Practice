#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int tapping_rain_water(int *arr, int n)
{
    int res = 0;
    int lmax[n];
    int rmax[n];

    lmax[0] = arr[0];
    for(int i=1;i<n;i++)
        lmax[i] = lmax[i-1] > arr[i] ? lmax[i-1] : arr[i];

    rmax[n-1] = arr[n-1];

    for(int i=n-2;i>=0;i--)
        rmax[i] = arr[i] > rmax[i+1] ? arr[i] : rmax[i+1];   

    for(int i=1;i<n-1;i++){
        if(lmax[i]>rmax[i])
            res = res + rmax[i] - arr[i];
        else
            res = res + lmax[i] - arr[i];    
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