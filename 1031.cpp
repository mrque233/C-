#include<stdio.h>
#include<math.h>
int main()
{
	double a=0,eps,s=0;
	int i=1,n=1;
	scanf("%f",&eps);
	for(i=1;i<=55555;i=i+3)
	 {
	 	a=pow(i,-1.0);
	 	s=s+a*n;
	 	if(a<eps) break;
	 	n=-n;
	 }
	printf("sum=%.6lf\n",s);
	return 0; 
}
