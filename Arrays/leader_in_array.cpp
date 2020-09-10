#include<bits/stdc++.h>
#include<iostream>
using namespace std;

vector<int> leader_in_array(int *arr, int n)
{
    vector<int>ans;
    int max = arr[n-1];
    ans.push_back(max);
    for(int i=n-2; i>=0; i--){
        if(arr[i]>max){
            max = arr[i];
            ans.push_back(arr[i]);
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    vector<int> ans = leader_in_array(arr, n);

    for(auto i : ans)
        cout<<i;


    return 0;
}