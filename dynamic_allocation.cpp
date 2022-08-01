#include<iostream>
using namespace std;

int main(){
    //1 d array initialized in heap memory
    //int *arr = new int[3];
    // for(int i=0;i<3;i++)
    // {
    //     cin>>arr[i];
    // }
    //         for(int i=0;i<3;i++)
    // {
    //     cout<<arr[i];
    // }
//     arr[2]=2;
// cout<<arr[2];

//creating 2d array on n*n

int row ,col;
cin>>row;
cin>>col;
int **arr=new int *[row];
for (int i = 0; i < row; i++)
{
    arr[i] = new int[col];
}
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
        cin>>arr[i][j];
    }
    
}
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
for (int i = 0; i < row; i++)
{
    delete []arr[i];
}
delete []arr;


    return 0;
}