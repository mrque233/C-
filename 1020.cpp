#include<stdio.h>
#include<math.h>
int main()
{
	int a,A,b,B,c,C;
	double x,y,z,p;
	scanf("%d%d%d%d%d%d",&a,&A,&b,&B,&c,&C);
	x=sqrt((a-b)*(a-b)+(A-B)*(A-B));
	y=sqrt((a-c)*(a-c)+(A-C)*(A-C));
	z=sqrt((c-b)*(c-b)+(C-B)*(C-B));
	if(x+y>z&&x+z>y&&y+z>x)
	 {p=(x+y+z)/2;
	  printf("L=%.2lf, A=%.2lf\n",x+y+z,sqrt(p*(p-x)*(p-y)*(p-z)));
	 }
	else
	 {printf("Impossible"); 
	  } 
	return 0;  
 }
