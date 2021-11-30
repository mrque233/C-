#include<stdio.h>
int main()
{
	int a,b,c,max,min;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&b>c)
	{
		printf("min=%d,max=%d",c,a);
	}
	if(a>c&&c>b)
	{
		printf("min=%d,max=%d",b,a);
	}
	if(c>a&&a>b)
	{
		printf("min=%d,max=%d",b,c);
	}
	if(c>b&&b>a)
	{
		printf("min=%d,max=%d",a,c);
	}
	if(b>a&&a>c)
	{
		printf("min=%d,max=%d",c,b);
	}
	if(b>c&&c>a)
	{
		printf("min=%d,max=%d",a,b);
	}
	return 0;
}
