#include<stdio.h>
int main()
{
    int n;
    int i;
    int p[4];
    int a,b,c,d;
    int sum;
    scanf("%d",&n);
    for(i=0;i<4;i++)
    {
        p[i]=n%10;
        n=n/10;
    }
     a=(p[0]+9)%10;
     b=(p[1]+9)%10;
     c=(p[2]+9)%10;
     d=(p[3]+9)%10;
     sum=b*1000+a*100+d*10+c;
     printf("The encrypted number is %d",sum);
    return 0;
}
