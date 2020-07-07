#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum,i;
    string s;
    while(cin>>s)
    {
        int l=s.length();
        sum=0;
        if(s[0]=='0')
            break;
        if(l==5)
            sum=(s[0]-48)*120+(s[1]-48)*24+(s[2]-48)*6+(s[3]-48)*2+(s[4]-48)*1;
        else if(l==4)
            sum=(s[0]-48)*24+(s[1]-48)*6+(s[2]-48)*2+(s[3]-48)*1;
        else if(l==3)
            sum=(s[0]-48)*6+(s[1]-48)*2+(s[2]-48)*1;
        else if(l==2)
        {
            sum=(s[0]-48)*2+(s[1]-48)*1;

        }
        else if(l==1)
            sum=(s[0]-48)*1;
        cout<<sum<<endl;
    }
}
