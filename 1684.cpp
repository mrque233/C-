#include<stdio.h>
int main()
{
	int n,sum=1;
	scanf("%d",&n);
	while(n>1)
	 {sum=sum*n;
	  n--;
	  } 
	printf("%d\n",sum);
	return 0;  
}
