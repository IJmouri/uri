#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    string s;
    double x=0,c;
    map<string,int>mp;
    cin>>t;
    getchar();
    getchar();
    while(t--)
    {
        c=0;
        if(x!=0)
            cout<<endl;
        while(getline(cin,s))
        {
            if(s.size()==0)
                break;
            if(mp.count(s)==0)
            {
                mp[s]=1;
            }
            else
                mp[s]=mp[s]++;
            c++;
        }

        map<string,int>::iterator it;
        for(it=mp.begin();it!=mp.end();it++)
        {
            cout<<it->first<<" "<<fixed<<setprecision(4)<<(it->second*100)/c<<endl;
        }
        mp.clear();
        x++;
    }

}
