#include<stdio.h>
int main()
{
	int i=1,n;
	long double e=1.00000000,s=0;
	scanf("%d",&n);
	while(i<=n)
	 {
	 	s=s+s*i;
	 	e=e+(1/s);
	 	i++;
	 }
	printf("%.8ld\n",e);
	return 0; 
 } 
