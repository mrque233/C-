#include <stdio.h>
#include <math.h>
int Isprime(int n)
{
int i;
for(i=2;i<=sqrt(n);i++)
{
   if(n%i==0) break;                          
}
if(i>sqrt(n))
return 1;
else
return -1;
}
int main(void)
{
    int n,result;
    scanf("%d",&n);
    result=Isprime(n);               
    if(result==1)
        printf("该数字是素数！");
    else
        printf("该数字不是素数！");
return 0;
}
