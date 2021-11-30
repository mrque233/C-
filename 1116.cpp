#include <stdio.h>
double fn( double x, int n );
int main()
{
    double x;
    int n;
    scanf("%lf %d", &x, &n);
    printf("%.2f\n", fn(x,n));
    return 0;
}
double fn( double x, int n )
{
	double s=1.0;
	if(n>1&&n%2==0)
	 {
	 	for(int i=1;i<=n;i++)
	 	 {
	 	 	s=s*x;
		 }
		 s=-s+fn(x,n-1);
	 }
	if(n>1&&n%2!=0)
	 {
	 	for(int i=1;i<=n;i++)
	 	 {
	 	 	s=s*x;
		 }
		 s=s+fn(x,n-1); 
	 } 
	if(n=1)
	 {
	 	s=-(s+x-1);
	 } 
}
