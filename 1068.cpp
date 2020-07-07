#include <iostream>
#include <stack>
#include <stdio.h>
using namespace std;
int main()
{
    string s;
    int t,i,k;


    while(cin>>s)

    {
        //getchar();
        stack <char> st;

        for( i = 0; i < s.length(); i++)
        {
            if(st.size() > 0 and s[i] == ')' and st.top() == '(')
            {
                st.pop();
            }
            else if(st.size() >=0 and s[i] == '('||s[i]==')' )
                st.push(s[i]);
        }
        if(st.size() == 0)
            printf("correct\n");
        else
            printf("incorrect\n");
    }
}
