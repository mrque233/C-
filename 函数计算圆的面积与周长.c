#include <stdio.h>
#include <math.h>
int get(float a,float s,float c)
{
	s=pow(a,2.0)*3.14;
	c=2.0*3.14*a;
	printf("area=%.2f, perimeter=%.2f",s,c);
}
int main()
{
	double a,s,c;
	scanf("%lf",&a);
	get(a,s,c);
	return 0;
	
}
