#include<iostream>
using namespace std;
bool isSorted(int arr[] ,int size){
    if(size==0 || size==1)
    return true;

    if(arr[0]>arr[1])
    {return false;}

    else{
            bool newArrray = isSorted(arr+1,size-1);
            return newArrray;
    }
}
int main(){
    int arr[5]={1,4,4,4,5};
    int size=5;
    bool res=isSorted(arr,size);
    cout<<res;
    if(res)
    cout<<"sorted array";
}