#include<stdio.h>
float pl(float eps);
int main()
{
    float eps,s;
    scanf("%f",&eps);
    s=pl(eps);
	printf("½üËÆÖµÎª%f",s);
	return 0; 
}
float pl(float eps)
{
	int i=1,flag=1;
	float b,s=0;
	b=1;
	for(i=1;b>eps;i++)
	 {
	 	b=1.0/(i*2-1);
	 	s=s+b*flag;
	 	flag=-flag;
	 } 
	return s*4.0; 
}
