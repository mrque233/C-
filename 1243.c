#include <stdio.h>
int main()
{
int year,month,day,sum=365,i,a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
        scanf("%d %d %d",&year,&month,&day);
        if(year%400==0||year%4==0&&year%100!=0)
            a[2]=29,sum=366;
        for(i=12;i>month;i--)
            sum-=a[i];
        printf("是第%d天",sum-a[month]+day);

   return 0;
}
