#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,n,x=0,y=0,z=0,a,b,c=0;
    while(scanf("%d", &n) != EOF)
    {
        c=0;
        x=0;
        y=0;
        z=0;
        stack<int>st;
        priority_queue<int>pq;
        queue<int>q;

        for(i=1; i<=n; i++)
        {

            cin>>a>>b;
            if(a==1)
            {
                st.push(b);
                pq.push(b);
                q.push(b);
            }
            else if(st.size()!=0&&pq.size()!=0&&q.size()!=0)
            {
                c++;
                if(st.top()==b)
                {
                    x++;
                }
                if(pq.top()==b)
            {


                    y++;

                }
                if(q.front()==b)
                {
                    z++;
                }
                st.pop();
                pq.pop();
                q.pop();
            }
        }
        if(x!=c&&y!=c&&z!=c)
        {
            cout<<"impossible\n";
        }
        else if(x==0&&y==0&&z==0&&c!=0)
            cout<<"impossible\n";
        else if(x>y&&x>z&&x==c)
        {
            cout<<"stack\n";
        }
        else if(y>x&&y>z&&y==c)
            cout<<"priority queue\n";
        else if(z>x&&z>y&&z==c)
            cout<<"queue\n";
        else if(c==0)
            cout<<"not sure\n";
            else
                cout<<"not sure\n";

    }
}
