#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,sum,a,b;
    string s1,s2,s3,s4;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>s1>>s2>>s3>>s4;
        cin>>a>>b;
        sum=a+b;
        if(sum%2==0)
        {
            if(s2=="PAR")
                cout<<s1<<endl;
                else
                    cout<<s3<<endl;
        }
        else
        {
                if(s2=="IMPAR")
                cout<<s1<<endl;
                else
                    cout<<s3<<endl;

        }
    }
    return 0;

}
