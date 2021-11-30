#include<stdio.h>
#include<math.h>
int main()
{
	int n,i=1;
	scanf("%d",&n);
	n=fabs(n);
	if(n==0||n==1)
	{
		i=2;
	}
	while(n/(pow(10,i-1))>=1)
	 {
	 	i++;
	 }
	printf("%d\n",i-1);
	return 0; 
}
