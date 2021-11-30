#include <stdio.h>
#include <math.h>
double funcos( double e, double x );
int main()
{   
    double e, x;
    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));
    return 0;
}
double funcos(double e,double x)
{
    double s=1.0,ss=1.0,a;
    int i=0,j;
    a=1;
    if(fabs(a)>e)
    {
     for(j=1;j<=i;j++)
     {
     	s=s*j;
	 }
	 a=(pow(x,i))/s;
	 a=-a;
	 ss=ss+a;
	 i=i+2;
	}
    else return ss;
}
