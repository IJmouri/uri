#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,a,i,j;
    map<string,int>mp;
    string s;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        cin>>s>>a;
        mp[s]=a;
    }
    for(j=0;j<n;j++)
    {
        int sum=0;
        while(cin>>s)
        {
            if(s==".")
                break;
            map<string,int>::iterator it;
            if(mp.find(s)!=mp.end())
            {
                sum=sum+mp[s];
            }
        }
        printf("%d\n",sum);
    }
}
