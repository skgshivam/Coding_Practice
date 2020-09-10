#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void elements_frequency_array(int *arr, int n)
{
    unordered_map<int, int> freq;

    for(int i=0;i<n;i++){
        if(freq.find(arr[i])!=freq.end())
            freq[arr[i]]++;
        else 
            freq[arr[i]]=1;    
    }

    for(auto x:freq)
        cout<<x.first<<" "<<x.second<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    elements_frequency_array(arr, n); 

    return 0;
}