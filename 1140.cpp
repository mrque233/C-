#include<stdio.h>
int fac(int n)
{
	int s=1,i=1;
	for(i=1;i<=n;i++)
	 {
	 	s=s*i;
     } 
     return s;
}
int sum(int m,int x)
{
	int S=0,i=1;
	for(i=1;i<=m;i++)
	{
		S=S+fac(i);
	}
	return S;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("s=%ld\n",sum(n,fac(n)));
	return 0;
}
