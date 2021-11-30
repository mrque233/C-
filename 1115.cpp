#include <stdio.h>
double calc_pow( double x, int n );
int main()
{
    double x;
    int n;
    scanf("%lf %d", &x, &n);
    printf("%.0f\n", calc_pow(x, n));
    return 0;
}
double calc_pow( double x, int n )
{
	int s;
	if(n==1)
	 {
	 	s=x;
	 }
	if(n>1)
	 {
	 	s=x*calc_pow(x,n-1);
	 } 
	 return s; 
}
