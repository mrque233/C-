#include<stdio.h>
int main()
{
	int a,b,c,t;
	scanf("a=%d\n",&a);
	scanf("b=%d\n",&b);
	scanf("c=%d\n",&c);
	t=a;
	a=c;
	c=b;
	b=t;
	printf("a=%d\nb=%d\nc=%d\n",a,b,c);
	return 0;
}
