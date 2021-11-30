#include<stdio.h>
#include<math.h>
struct point
{
	int x;
	int y;
};
float distance(struct point p1, struct point p2);
int main()
{
	struct point p[2];
	float d;
	for(int i=0;i<2;i++)
	 {
	 	scanf("%d%d",&p[i].x,&p[i].y);
	 }
	 d=(struct point p[0],struct point p[1]);
	 printf("两点之间的距离是%.3f\n",d);
}
float distance(struct point p1, struct point p2)
{
	struct point p[2];
	float s,a,b;
	a=fabs(p[0].x-p[1].x);b=fabs(p[0].y-p[1].y);
	s=pow((a*a+b*b),0.5);
	return s;
}

