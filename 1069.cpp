#include <iostream>
#include <stack>
#include <stdio.h>
using namespace std;
int main()
{
    string s,s1;
    int t,i,k,count=0;
    cin>>t;
    getchar();
    for(k=1;k<=t;k++)
    {
        stack <char> st;
         getline(cin , s);
         s1="";
         for(i=0;i<s.length();i++)
         {
             if(s[i]=='<'||s[i]=='>')
                s1+=s[i];
         }
        count=0;
        for( i = 0; i < s1.length(); i++)
        {
            if(st.size() > 0 and ( s1[i] == '>'and (st.top() == '<')))
            {
                st.pop();
                count++;
            }
            else
                st.push(s1[i]);
        }
        printf("%d\n",count);
    }

}
