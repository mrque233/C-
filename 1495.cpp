#include<stdio.h>
#include<math.h>
int main()
{
	double r,circumference,area;
	scanf("%lf",&r);
	area=3.14*pow(r,2.0);
	circumference=2*3.14*r;
	printf("circumference=%.2lf area=%.2lf\n",circumference,area);
	return 0;
}
