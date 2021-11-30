#include<stdio.h>
int main()
{
	int N;
	double S,i;
	scanf("%d",&N);
	S=0;
	for(double i=1;N>=i;i++)
	 {
	 	S=S+1/i;
	 }
	printf("sum=%.6lf\n",S);
	return 0; 
}
