#include<iostream>

using namespace std;
int main(){
    string s;
    int count=0;

    getline(cin , s);
    for (int i = 0; i < s.size();   i++)    
    {
        if((s[i]<='9') && (s[i]>='0') || s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z'){
            continue;
        }
        else{
            count++;
        }
    }
    cout<<count;
    
}