#include<iostream>
using namespace std;
int main(){
    int i=1,n=20 , c=1;
    for (int i = 1; i < n+1; i++)
    {
      if (c%2==1)
      {
          cout<<i++<<i<<endl;
          c++;
      }
      else{

         cout<<++i<<--i<<endl;
         i++;
         c++;
      }
     
    }
    
 }
     