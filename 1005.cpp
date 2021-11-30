#include<stdio.h>
int main()
{
	int a,b,c,d,s;
	double p;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	s=a+b+c+d;
	p=s/4.0;
	printf("%d %.1f\n",s,p);
	return 0;
}
