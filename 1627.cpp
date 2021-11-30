#include<stdio.h>
#include<math.h>
int main()
{
	float x;
	scanf("%f",&x);
    if(x>=60)
     {printf("%.1f\n",x);
	 }
	if(x<60)
	 {printf("%.1f\n",(sqrt(x))*10);
	  } 
	return 0;
}
