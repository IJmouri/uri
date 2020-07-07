#include <bits/stdc++.h>
using namespace std;
int freq[100000];
int main()
{
    char c;
    string s;
    int n,count=0,sum=0,t;
    while(scanf("%d",&n))
    {
        sum=0;
        count=0;
        if(n==0)
            break;
        for(int i=1; i<=n; i++)
        {
            cin>>c>>t;
            getchar();
            cin>>s;
            if(s=="correct")
            {
                sum=sum+t+freq[c];
                count++;
            }
            else
            {
                freq[c]=freq[c]+20;
            }
        }
        cout<<count<<" "<<sum<<endl;
        memset(freq,0,sizeof freq);


    }

    return 0;
}

