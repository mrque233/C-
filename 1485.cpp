#include<stdio.h>
#include<math.h>
int main()
{
	double x,y;
	scanf("%f",&x);
	y=pow(x,3.5)+fabs(x-2)+1/x;
	printf("y=%.3f\n",y);
	return 0;
}
