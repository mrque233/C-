#include<stdio.h>
double ab(float r,float h)
{
	float result;
	result=3.14*r*r*h;
	return result;
	
}
int main()
{
	float r,h,v;
	scanf("%f%f",&r,&h);
	v=ab(r,h);
	printf("%.3lf",v);
	return 0;
}
