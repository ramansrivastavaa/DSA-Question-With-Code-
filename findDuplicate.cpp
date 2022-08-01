#include <bits/stdc++.h>

using  namespace std;

int finddupli(int arr[] ){
    int ans=0;
    for (int i = 0; i < 5; i++)
    {
        ans = ans^arr[i];
    }
    //its giving the array without the duplicate num
    for (int i = 1 ; i < 5; i++)
    {
        ans = ans^i;
    }
    return ans;
    
}

int main(){
    int arr[5]={1,4,2,3,2};
    int size=sizeof(arr)/sizeof(int);
    int n =finddupli(arr );
    cout<<n;

}