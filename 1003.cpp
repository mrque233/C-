#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,h,c,j,s;
	scanf("%d%d",&a,&b);
	h=a+b;
	c=a-b;
	j=a*b;
	s=a/b;
	printf("%d + %d = %d\n%d - %d = %d\n%d * %d = %d\n%d / %d = %d",a,b,h,a,b,c,a,b,j,a,b,s);
	return 0;
}
