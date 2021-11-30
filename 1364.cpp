#include <stdio.h>
double fibonacci(int n) 
{
	int i=1,j=1,l=0,k=1;
	if(n<=2) return 1;
	if(n>2)
	 {
	for(i=1;i<=n-2;i++)
	 {
	 	l=j;
        j=k;
        k=l+k;
        if(i==n-2) return k;
	 }	 	
	 }

}
int main(void) 
{
	int n;
	double result;
	scanf("%d",&n);
	result=fibonacci(n);
	printf("%.0f\n",result);
	return 0;
}
