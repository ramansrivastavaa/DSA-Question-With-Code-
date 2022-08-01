#include <bits/stdc++.h>
using namespace std;


int main(){
    int arr[6]={1,7,3,6,5,6};
    int s=0 , e=6;
    int mid=(s+e)/2;
    
    while(sum1!=sum2){
        int sum1=0 ,sum2=0;
        if(mid==-1){
            sum1=0;
            cout<<sum1;
            }
            else{
        for (int i = 0; i < mid; i++)
        {
            sum1=sum1+arr[i];
        }
        cout<<"sum1"<<sum1;
            }
         for (int i = mid+1; i < e-1; i++)
        {
            sum2=sum2+arr[i];

        }
        cout<<sum2;
        if(sum1<sum2){
            mid=mid+1;
        }
        else if(sum1>sum2){
            mid=mid-1;
        }
        else{
            cout<<mid;
        }
        
    }


}