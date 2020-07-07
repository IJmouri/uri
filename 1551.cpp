#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<char>st;
    int test,i,j;
    cin>>test;
    getchar();
    for(i=1;i<=test;i++)
    {
        string s;

        getline( cin,s);
        for(j=0;j<s.length();j++)
        {
            if(s[j]>='a'&&s[j]<='z')
            st.insert(s[j]);
        }
        if(st.size()==26)
            cout<<"frase completa\n";
        else if(st.size()>=13)
            cout<<"frase quase completa\n";
        else
            cout<<"frase mal elaborada\n";
            st.clear();

    }
}

