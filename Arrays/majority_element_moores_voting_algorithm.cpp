#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int majority_element(int *arr, int n)
{
    int res = 1;
    int count = 1;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[res])
            count++;
        else
            count--;
        
        if(count==0){
            res = i;
            count = 1;
        }
    }

    count = 0;
    for(int i=0;i<n;i++)
        {
            if(arr[i]==arr[res])
            count++;

            if(count>n/2)
                return arr[res];

        }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    cout<<majority_element(arr, n); 

    return 0;
}