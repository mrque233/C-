#include<stdio.h>
int main()
{
	double BMI,H,W;
	scanf("%lf%lf",&W,&H);
    BMI=W*(1/(H*H));
	if(BMI<18.5)
	 {printf("thin\n");
	 }
	if(BMI>=18.5&&BMI<=23.9)
	   {printf("normal\n");
	   } 
	if(BMI>23.9&&BMI<=28)
	  {printf("fat\n");
	  }  
	if(BMI>28)
	   {printf("too fat\n");
	   }
	return 0;	   
}
