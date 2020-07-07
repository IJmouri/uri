#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,test,n,j;
    cin>>test;
    for(i=1;i<=test;i++)
    {
        string s[110];
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>s[j];
        }
        int c=0;
        for(j=1;j<n;j++)
        {
            if(s[j-1]!=s[j])
                c=1;
        }
        if(c==0)
            cout<<s[0]<<endl;
        else
            cout<<"ingles\n";
    }
}
