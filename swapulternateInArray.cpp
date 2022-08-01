#include<iostream>

using namespace std;
void swap(int arr[] , int size){
    for(int i=0 ; i<size ; i+=2){
        if(i+1 < size){
            swap(arr[i] , arr[i+1]);
           
        }
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int arr1[6]={1,2,3,4,5,6};
    swap(arr , 5);
    swap(arr1 , 6);
    cout<<"done";
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
    cout<<endl;
    for(int i=0;i<6;i++){
        cout<<arr1[i];
    }
}