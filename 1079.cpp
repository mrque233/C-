#include<stdio.h>
int main()
{
	int N,x;
	x=1;
	N=100;
	double S,i,a;
	S=0;
	a=1;
	for(double i=1;N>=a;i=i+2)
	 {
        if(i<=3)
         {S=S+1/i;
		 }
		else
		S=S+1/(i*x);
	 	x=-x;
	 	a=a+1; 
	 }
	printf("s=%.3lf\n",S);
	return 0; 
}
