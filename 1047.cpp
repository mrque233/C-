#include<stdio.h>
int main()
{
	printf("[1] apple\n");
	printf("[2] pear\n");
	printf("[3] orange\n");
	printf("[4] grape\n");
	printf("[0] exit\n");
	int i=1;
	for(i=1;i<=5;i++)
	 {
	 	int x;
	 	scanf("%d",&x);
	 	if(x==1) printf("price = 3.00\n");
	 	else if(x==2) printf("price = 2.50\n");
	 	else if(x==3) printf("price = 4.10\n");
	 	else if(x==4) printf("price = 10.20\n");
	 	else if(x==0) break;
	 	else printf("price = 0.00\n");
	 }
	return 0; 
} 
