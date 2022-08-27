#include<bits/stdc++.h>
using namespace std;

int main(){
int arr[5]={5,9,12,23,31};
int k=20;
int start=0,end=4;
int diff=10000,e1=-1,e2=-1;
while (start<end)
{
    int sum=arr[start]+arr[end];
    if((sum-k)<diff){
            diff=(sum-k);
            e1=arr[start];
            e2=arr[end];
        }
    if(sum<k){
       
         start++;
    }
    else{
        
        end--;
    }
}
    cout<<e1<<" "<<e2<<endl;

    return 0;
}