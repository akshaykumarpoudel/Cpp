#include<iostream>
using namespace std;

int main()
{
    int a=22074;
    int b=a;
    int f;
    int count=0;
    while(b>0)
    {
        f=b%10;
        if(f!=0 && a%f==0)
        {
            count++;
        }
        b=b/10;
    }
    cout<<count;
    return 0;
}