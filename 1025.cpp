#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int nr[10005],qr[10005];
int main()
{
    int q,n,i,c=1,j,k;
    while(scanf("%d%d",&n,&q))
    {
        if(n==0&&q==0)
            break;
        for(i=1; i<=n; i++)
        {
            scanf("%d",&nr[i]);
        }
        for(j=1; j<=q; j++)
            scanf("%d",&qr[j]);
        printf("CASE# %d:\n",c++);
        k=0;
        sort(nr+1,nr+n+1);
        int cou = 0;
        for(j=1; j<=q; j++)
        {
            cou = 0;
            for(i=1; i<=n; i++)
            {
                if(qr[j]==nr[i])
                {
                    cou++;
                    k=1;
                    break;
                }
                else
                {
                     k = 0;
                }
                cou++;
            }

            if(k == 1)
                printf("%d found at %d\n",qr[j] , cou);
            else
                printf("%d not found\n",qr[j]);
        }
        memset(qr, 0, sizeof qr);
        memset(nr, 0, sizeof nr);
    }
    return 0;
}
