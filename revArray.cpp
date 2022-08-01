#include<iostream>
#include <bits/stdc++.h>
using namespace std;

 void rev(int arr[] ,int size){
  int start=0 , end = size-1;
     while(start <= end-1)
     {
         swap(arr[start] , arr[end]);
         start++;
         end--;
     }
    for (int i = 0; i < size; i++)
     {
         cout<<arr[i];
     }
    
 }



int main(){
    cout<<"hello'";
    int size;
    cin>>size;
    int arr[100];
    cout<<"input array";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
     rev(arr, size);
// int start=0 , end = size;
//     while(start <= end-1)
//     {
//         swap(arr[start] , arr[end]);
//         start++;
//         end--;
//     }
//    for (int i = 0; i <= size; i++)
//     {
//         cout<<arr[i];
//     }
   
    return 0;
    
}