#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    while(cin>>n)
    {
        queue<int> q;
        if(n==0)
            break;
        for(i=1;i<=n;i++)
            q.push(i);
            cout<<"Discarded cards: ";
            while(q.size()>2)
            {
                cout<<q.front()<<", ";
                q.pop();
                q.push(q.front());
                q.pop();

            }
            cout<<q.front();
            q.pop();
            cout<<"\nRemaining card: "<<q.front()<<endl;
    }
    return 0;
}
