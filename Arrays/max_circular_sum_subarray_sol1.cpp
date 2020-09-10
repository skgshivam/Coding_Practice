#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int max_circular_sum_subarray(int *arr, int n)
{   
   int res = arr[0];
   for(int i=0;i<n;i++){
       int curr_sum = arr[i];
       int curr_max = arr[i];

       for(int j=1;j<n;j++){
           int index = (i+j)%n;
           curr_sum += arr[index];
           curr_max = curr_max > curr_sum ? curr_max : curr_sum ;
       }
       res = res > curr_max ? res : curr_max ;
   }
   return res;

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    cout<<max_circular_sum_subarray(arr, n); 

    return 0;
}