#include<iostream>
using namespace std;

int main(){
int arr[5]={1,2,3,4,7};

int k =9;
int start=0 , end=4;
while (start<end)
{
    if(arr[start]+arr[end]==k){
        cout<<start<<" "<<end<<endl;
        break;
    }
    else if(arr[start]+arr[end]<k){
        start++;
    }
    else{
        end--;
    }
    cout<<"not found";
}

    return 0;
}