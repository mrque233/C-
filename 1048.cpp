#include<stdio.h>
int main()
{
	int N,x;
	x=1;
	double S,i,a;
	scanf("%d",&N);
	S=0;
	a=1;
	for(double i=1;N>=i;i=i+1)
	 {
	 	S=S+x*(i/a);
	 	x=-x;
	 	a=a+2;
	 }
	printf("sum=%.3lf\n",S);
	return 0; 
}
