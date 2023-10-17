#include<iostream>
#include<vector>
#include<algorithm>
#define M 101
using namespace std;


// vector<vector<int>> transpose(int a[][M], int n)
// {
//     vector<vector<int>> t;
//     int rows=sizeof(a)/sizeof(a[0]);
//     int columns=sizeof(a[0])/sizeof(a[0][0]);
//     cout<<rows<<" "<<columns;
//     return t;
// }
void printArr(vector<vector<int>> v)
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int a[][M]={{1,2,3},{4,5,6},{7,8,9}};
    
    int n=3;
    vector<vector<int>> v;

    for(int i=0;i<n;i++)
    {
        vector<int> row;
        for(int j=0;j<n;j++)
        {
            row.push_back(a[i][j]);
        }
        v.push_back(row);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            v[i][j]=a[j][i];
        }
    }
    

    //print
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}