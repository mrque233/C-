#include<stdio.h>
int main()
{
    int hh,mm,ss,n,t;
    scanf("%d:%d:%d",&hh,&mm,&ss);
    getchar();
    scanf("%d",&n);
    ss+=n;
    if(ss>=60)
    {
        ss-=60;
        mm++;
    }
    if(mm>=60)
    {
        mm-=60;
        hh++;
    }
    if(hh>=24)
        hh-=24;
    printf("%.2d:%.2d:%.2d",hh,mm,ss);
    return 0;
}
