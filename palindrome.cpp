#include<iostream>
using namespace std;

int main()
{
    int x=123456;
    string s=to_string(x);
    string z=s;
    string a="";
    for(int i=s.length()-1;i>=0;i--)
    {
        a+=z[i];
    }
    cout<<a;
    if(a==s) return true;
    else return false;
}