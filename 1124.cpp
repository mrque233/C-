#include<stdio.h>
int result(int a)
{
	if(a>0) return 2*a+1;
	else if(a==0) return 0;
	else return 1-2*a;
}
int main()
{
	int a,y;
	scanf("%d",&a);
	y=result(a);
	printf("%d",y);
	return 0;
}
