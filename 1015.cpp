#include<stdio.h>
#include<math.h>
int main()
{
	float x;
	double cost;
	scanf("%f",&x);
	if(x>=50){ cost=50*0.53+(x-50)*0.58;
	 printf("cost=%.2lf\n",cost);
	}
	if(50>x>=0){	 cost=x*0.53;
	 printf("cost=%.2lf\n",cost);
	}
	if(x<0){	 printf("Invalid Value!");
	}
	return 0; 
 } 
