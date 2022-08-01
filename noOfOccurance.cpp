#include<iostream>
using namespace std;
#include <bits/stdc++.h>

void occ(int arr[] , int size)
{
    int count[10];
    sort(arr , size);
    for(int i=0;i<size;i++){
        int c=1;
            for(int j=i+1;j<size;j++){
                if(arr[i]==arr[j]){
                    c++;
                }
                
            }
            cout<<(count[i]=c);
        }

}

int main(){
    int arr[5]={1,2,1,3,4};
    occ(arr , 5);
}