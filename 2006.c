#include<stdio.h>
int main()
{
    int a,b,c,d,e,s,t;
    while(scanf("%d",&t)==1){
        scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
        s=0;
        if(a==t)
            s++;
        if(b==t)
            s++;
        if(c==t)
            s++;
        if(d==t)
            s++;
        if(e==t)
            s++;
        printf("%d\n",s);
    }
    return 0;

}
