#include<stdio.h>
int fib(int x);
int main()
{
	int x;
	scanf("%d",&x);
	if(x==1) printf("%d",x);
	if(x>1)
	{
		printf("1,");
		printf("%d",fib(x));
	}
	return 0;
}
int fib(int x)
{
	int i=1,j=1,l=0,k=1;
	for(i=1;i<=x-2;i++)
	 {
	 	printf("%d,",k);
	 	l=j;
        j=k;
        k=l+k;
	 }
	 return k;
}
