#include<iostream>
using namespace std;
bool binary(int arr[],int size,int k){
    if (size==0)
    {
        return 0;
    }
  int mid=(0+(size-1))/2;
  cout<<mid;
  if(arr[mid]==k){
    return 1;
  }
  else if(arr[mid]>k){
    binary(arr,size-mid-1,k);
  }
  else{
    binary(arr+mid+1,size-mid-1,k);
  }
return 0;
}
int main(){
    int arr[5]={1,4,4,4,5};
    int size=5,k=4;

    bool ans=binary(arr,size,k);
    if (ans)
    {
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
    
    

}