#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>=1&&n<=5)
	{
		if(n==1||n==3||n==5)
		 {
		 	printf("²½ÐÐ\n");
		 }
		if(n==2||n==4)
		 {
		 	printf("×ø³µ\n");
		 } 
	}
	return 0;
}
