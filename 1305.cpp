#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    int i,j,x;
    while(cin>>s>>s1)

    {

        string s2,s3;
        for(i=0;i<s.length();i++)
        {

            if(s[i]=='.')
            {
                x=i;
                for(j=i+1;j<=i+4;j++)
                    s2+=s[j];
                break;
            }

        }
        for(j=2;j<s1.length();j++)
        {
            s3+=s1[j];
        }
        int res=0;
        if(s[x]!='.')
            x=s.length();

        for(i=0;i<x;i++)
        {
            res=res*10+s[i]-'0';
        }


        if(s2>=s3)
            cout<<res+1<<endl;
        else
            cout<<res<<endl;
    }
    return 0;

}
