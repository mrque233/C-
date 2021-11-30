#include<stdio.h>
int main()
{
	double BMI,H,W;
	scanf("%f%f",&W,&H);
    H=H*100;
	BMI=W/(H*H);
	if(BMI<18.5)
	 {printf("thin\n");
	 }
	if(BMI>=18.5&&BMI<=23.9)
	 {printf("normol\n");
	  } 
	if(BMI>23.9&&BMI<=28)
	 {printf("fat\n");
	   }  
	if(BMI>28)
	 {printf("too fat\n");
		}
	return 0;	   
}
