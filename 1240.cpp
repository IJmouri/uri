#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()

{
    int test,i,c;
    scanf("%d",&test);
    while(test--)
    {

        c=0;
        string s1,s2;
        cin>>s1>>s2;

           int  l=s1.length()-1;
            for(i=s2.length()-1;i>=0;i--)
            {
                if(s2[i]==s1[l])
                    {
                    c++;
                    l--;
                    }
            }
        if(c==s2.length())
            cout<<"encaixa\n";
        else
           cout<<"nao encaixa\n";

    }

}

