#include <stdio.h>
int main(void)
{
int i,g,s,b,count;
count=0;                          /*$ERROR$*/
for(i=100;i<=999;i++)   
{
   g=i%10;
   s=i/10%10;
   b=i/100%10;                       /*$ERROR$*/
   if((g+s)*b==28) 
      count=count+1;                   /*$ERROR$*/
}
printf("%d\n",count);
return 0;
}
