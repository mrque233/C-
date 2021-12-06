#include<stdio.h>
int main()
{
	float x1,y1,x2,y2;
	scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
	float x3,y3;
	x3=x1+x2;
	y3=y1+y2;
	printf("(%.1f, %.1f)",x3,y3);
	return 0;
}
