#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(n)
    {
       /* switch(i)
        {
            case 1:{
            int h = n/100;
            cout<<h<<":notes of 100"<<endl;
            n=n%100;
            i++;}
            break;
            case 2:
            {int f = n/50;
            cout<<f<<":notes of 50"<<endl;
            n=n%50;
            i++;}
            break;
            case 3:
            {int t = n/20;
            cout<<t<<":notes of 20"<<endl;
            n = n%20;
            i++;}
            break;
            case 4:
            {int ten = n/10;
            cout<<ten<<":notes of 10"<<endl;
            n =n%10;
            i++;}
            break;
            case 5:
            {int one=n/1;
            cout<<one<<":coins of 1"<<endl;
            n=n%1;
            i++;}
            break;
            default:
            cout<<"Done";

        }*/
        int h = n/100;
            cout<<h<<":notes of 100"<<endl;
            n=n%100;
            int f = n/50;
            cout<<f<<":notes of 50"<<endl;
            n=n%50;
            int t = n/20;
            cout<<t<<":notes of 20"<<endl;
            n = n%20;
            int ten = n/10;
            cout<<ten<<":notes of 10"<<endl;
            n =n%10;
            int one=n/1;
            cout<<one<<":coins of 1"<<endl;
            n=n%1;
    }
}