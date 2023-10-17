#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> valueEqualToIndex(int arr[], int n) {
    // code here
    vector<int> v;
    for(int i=-1;i<n-1;i++)
    {
        if(arr[i+1]==i+2)
        {
            v.push_back((i+1));
        }
    }
    return v;
}

int main()
{
    int arr[]={15,2,45,12,7};
    vector<int> v=valueEqualToIndex(arr,5);
    for(auto i:v)
    {
        cout<<i<<", ";
    }
    cout<<endl;
    vector<int> v1={90,100,78,89,67};
    sort(v1.begin(),v1.end());
    for(auto i:v1)
    {
        cout<<i<<", ";
    }
    return 0;
}