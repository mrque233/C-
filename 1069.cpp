#include<stdio.h>
int main()
{
	float s=1;
	int i=1,m=0,x=1;
	while(m<=100)
	 {
	    i=i+2;
	 	s=s+(1.000/i)*x;
	 	
	 	x=-x;
	 	m++;
	 }
	printf("s=%.3f\n",s);
	return 0; 
}
