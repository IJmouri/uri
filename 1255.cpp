#include<iostream>
#include<cstdio>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
int freq[129];
int main()
{
    int i,test;
    string s;
    scanf("%d",&test);
    getchar();
    while(test--)
    {
        getline(cin,s);
        for(i=0;i<s.size();i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
                s[i]=s[i]+32;
        }
        for(i=0;i<s.size();i++)
        {
            if(s[i]>='a'&&s[i]<='z')
            freq[s[i]]++;
        }
        int max=0;
        for(i=97;i<=122;i++)
        {
            if(max<freq[i])
                max=freq[i];
        }
        for(i=97;i<=122;i++)
        {
            if(max==freq[i])
                printf("%c",i);
        }
        cout<<"\n";
        memset(freq,0,sizeof freq);
    }
    return 0;
}
