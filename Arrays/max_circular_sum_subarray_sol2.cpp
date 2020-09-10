#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int max_circular_sum_subarray(int *arr, int n)
{   
   int res = arr[0];
   int max = arr[0];

   for(int i=1;i<n;i++){
       max = max + arr[i] > arr[i] ? max + arr[i] : arr[i];
       res = res > max ? res : max;
   }
   if(res < 0)
     return res;
   int min = arr[0];
   int res_min = arr[0];

   for(int i=1;i<n;i++){
       min = min + arr[i] < arr[i] ? min + arr[i] : arr[i];
       res_min = res_min < min ? res_min : min ;
   }

   int array_sum = arr[0];

   for(int i=1;i<n;i++)
        array_sum += arr[i];

   return res > (array_sum - res_min) ? res : (array_sum - res_min);

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