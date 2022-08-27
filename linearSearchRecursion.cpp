#include<iostream>
using namespace std;
bool linear(int arr[],int size,int k){
    if (size==0)
    {
        return 0;
    }
     if(arr[0]==k){
        return  1;
    }
    else{
        linear(arr+1,size-1,k);
    }
    return 0;
}
int main(){
    int arr[5]={1,4,4,4,5};
    int size=5,k=9;

    bool ans=linear(arr,size,k);
    if (ans)
    {
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
    
    

}