#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int find_max_appearing_element_in_n_ranges(int *arr_l, int *arr_r, int n)
{
    vector<int> temp;
    temp.resize(1000);
    for(int i=0;i<n;i++){
        temp[arr_l[i]]++;   
        temp[arr_r[i]+1]--;
    }
    int max=temp[0];
    for(int i=1;i<1000;i++){
        temp[i]+=temp[i-1];
        max = max > temp[i] ? max : temp[i];
    }

    return max;
}

int main(){
    int n;
    cin>>n;
    int arr_l[n], arr_r[n];
    for(int i=0;i<n;i++)
        cin>>arr_l[i];
    for(int i=0;i<n;i++)
        cin>>arr_r[i];

    cout<<find_max_appearing_element_in_n_ranges(arr_l, arr_r, n); 

    return 0;
}