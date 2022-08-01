#include<iostream>
using namespace std;
int fact(int n){
    if(n==0)
    return 1;
    int choti=fact(n-1);
    int badhi=n*fact(n-1);
    return badhi;
}
void count(int n){
    if(n==0){
       return;
    }
    cout<<n<<endl;
     count(n-1);
}
int main(){
    int n;
    cin>>n;
    int ans=fact(n);
    cout<<ans<<endl;
    ;
    count(n);
    return 0;
}