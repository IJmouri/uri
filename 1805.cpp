#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b;
    scanf("%lld%lld",&a,&b);
    long long int n=b-a+1;
    long long int sum=(n*(2*a+n-1))/2;
    cout<<sum<<"\n";

    return 0;
}
