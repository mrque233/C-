#include<stdio.h>
int main()
{
   int m, n, a, b, t, c;
   scanf("%d%d", &a, &b);
   m=a;   n=b;
   while(b!=0)
   
   { c=a%b; a=b;  b=c;}
   printf("最小公倍数为%d, 最大公约数为%d", m*n/a,a);
   return 0;
}
