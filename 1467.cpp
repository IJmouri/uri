#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)==3)
    {
        if(a==b&&c!=a)
            cout<<"C"<<endl;
        else if(b==c&&a!=b)
            cout<<"A"<<endl;
        else if(c==a&&b!=a)
            cout<<"B"<<endl;
        else if(a==b&&b==c&&c==a)
            cout<<"*"<<endl;
    }
    return 0;
}
