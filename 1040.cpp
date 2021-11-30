#include<stdio.h>
int main()
{
	int N,x;
	x=1;
	double S,i,a;
	scanf("%d",&N);
	S=0;
	a=1;
	for(double i=1;N>=a;i=i+3)
	 {
	 	S=S+1/(i*x);
	 	x=-x;
	 	a=a+1;
	 }
	printf("sum=%.3lf\n",S);
	return 0; 
}
