#include<iostream>
#include<math.h>
using namespace std;

int power(int a,int b)
{
    int s=1;
    for(int i=0;i<b;i++)
    {
        s*=a;
    }
    return s;
}

int main()
{
    int a,b=0,c=0,d=0,e=0,f=0,g=0;
    cout<<"Enter a number: ";
    cin>>a;
    b=a;
    while(b>0)
    {
        c++;
        b=b/10;
    }
    while(a>0)
    {
        e=a%10;
        f+=power(e,c);
        a/=10;
    }
    if(a==f) cout<<"Armstrong no.: ";
    else cout<<"Not Armstrong no.: ";

    return 0;
}
