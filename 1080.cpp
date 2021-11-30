#include<stdio.h>
int main()
{
	int i=1,flag=1;
	float eps,b,s=0;
	b=1;
	scanf("%f",&eps);
	for(i=1;b>eps;i++)
	 {
	 	b=1.0/(i*2-1);
	 	s=s+b*flag;
	 	flag=-flag;
	 } 
	printf("%.2f",s*4);
	return 0; 
}
