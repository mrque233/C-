#include<stdio.h>
int fib(int x)
{
	int i=1,j=1,l=0,k=1;
	for(i=1;i<=x-2;i++)
	 {
	 	l=j;
        j=k;
        k=l+k;
	 }
	 return k;
}
int main()
{
	int x;
	scanf("%d",&x);
	printf("第%d项的Fibonacci值为：%d",x,fib(x));
	return 0;
}
