#include<stdio.h>
#include<math.h>
int z(int x)
{
	int i=1,s=1;
	for(i=1;i<=x*2-1;i++)
	 {
	 	s=s*i;
	 }
	 return s;
}
double sin(double x)
{
	int i=1;
	double ss=0,s=0,a=0;
	a=x;
	for(i=1;fabs(a)>=0.000001;i++)
	 {
	 	s=z(i);
	 	a=(pow(x,2.0*i-1.0))/s;
	 	a=pow(-1,i+1);
	 	ss=ss+a;
	 	if(fabs(a)<0.000001)
	 	 {
	 	 	return ss;
		 }
	 }
}
int main()
{
	double x,y;
	scanf("%f",&x);
	y=x*3.14/360;
	printf("sin%.2lfµÄÖµÎª%.2lf6z0",x,sin(y));
	return 0;
}

