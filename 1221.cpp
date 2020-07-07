#include<bits/stdc++.h>
using namespace std;
bool prime (int n)
{
   if(n == 2)
    return true;
   int x = sqrt(n);
   for(int i = 2; i <= x; i++)
   {
       if(n % i == 0)
        return false;
   }
   return true;
}
int main()
{
        int i,n,t;
        cin>>t;
        for(i=1;i<=t;i++)
        {
            cin>>n;
             if(prime(n) == false)
        cout<<"Not Prime\n";
       else
        cout<<"Prime\n";
        }
        return 0;
}
