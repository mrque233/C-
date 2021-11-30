#include<stdio.h>
#include<math.h>
int main()
{
	double a;
	scanf("%f",&a);
	if(a<100)
	{
	printf("%.2f",a*0.95);
	}
	if(100<=a<200)
	{
    printf("%.2f",a*0.9);
	}
	if(200<=a<500)
	{
	 printf("%.2f",a*0.85);
    }
	if(500<=a)
	{
	 printf("%.2f",a*0.8);
    }
	return 0;    
}
