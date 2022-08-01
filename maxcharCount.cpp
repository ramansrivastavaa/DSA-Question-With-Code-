#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int a[26] ={0};
    for (int i = 0; i < s.length(); i++)
    {
        char ch=s[i];
        int number=0;
        if (ch>='a' && ch<='z')
        {
             number=ch-'a';
        }
        else{
                number= ch-'A';
        }
        a[number]++;
        
    }
    int maxi=-1;
    int ans;
    for (int i = 0; i < 26; i++)
    {
        if (maxi<a[i])
        {
            ans=i;
            maxi=a[i];
        }
        
        
    }
    char finalans='a'+ans;
    cout<<finalans;
    
    
}