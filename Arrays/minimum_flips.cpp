#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void minimum_flips_2(int *arr, int n){

    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            if(arr[i]!=arr[0])
                cout<<"Flip from "<<i<<" to ";
            else    
                cout<<i-1<<endl;    
        }
        
        }
        if(arr[n-1]!=arr[0]){
            cout<<n-1;
        } 
}  

void minimum_flips(int *arr, int n)
{
    int flip_element;
    if(arr[0])
        flip_element = 0;
    else
        flip_element = 1;

    int temp = 0;

    for(int i=1;i<n;i++){
        if(arr[i]==flip_element && temp == 0){
            cout<<i<<" to ";
            temp = 1;
        }
        if(arr[i]!=flip_element && temp == 1){
            cout<<i-1<<endl;
            temp=0;
        }
    }    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    minimum_flips(arr, n); 
    minimum_flips_2(arr,n);

    return 0;
}