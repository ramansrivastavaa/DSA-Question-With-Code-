#include<iostream>
using namespace std;
int arraysum(int arr[],int size){
    if (size==0)
    {
        return 0;
    }
    else{
        int choti=arraysum(arr+1,size-1);
        cout<<choti;
        int badhi =arr[0]+choti;
        return badhi;
    }
    
}
int main(){
    int arr[5]={1,4,4,4,5};
    int size=5;

    int res=arraysum(arr,size);
    cout<<res;

}