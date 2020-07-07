#include <iostream>
#include <stack>
#include <stdio.h>
using namespace std;
int main()
{
    string s;
    int t,i,k,count;
    while(cin>>s)
    {
        stack <char> st;
        count=0;
        for( i = 0; i < s.length(); i++)
        {
            if(st.size() > 0 && (( s[i] == 'B' &&st.top() == 'S')|| (st.top() == 'B'&&s[i] == 'S')))
            {
                st.pop();
                count++;
            }
            else if(st.size() > 0 && (( s[i] == 'F' &&st.top() == 'C')|| (s[i] == 'C'&&st.top() == 'F')))
            {
                st.pop();
                count++;
            }
            else
                st.push(s[i]);
        }
        printf("%d\n",count);
    }
}
