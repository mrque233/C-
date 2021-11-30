#include<stdio.h>
int m(float r,float a)
{
	a=3.14*r*r;
	return a;
}
int n(float r,float b)
{
	b=r*2.0*3.14;
	return b;
}
int main()
{
	float r;
	float a,b;
	scanf("%d",&r);
	a=m(r,a);
	b=n(r,b);
	printf("area=%.2f, perimeter=%.2f\n",a*1.0,b*1.0);
	return 0;
}
