#include<stdio.h>
#include<math.h>
int main()
{
	int n;
    int sum=0;
	printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n");
    for(sum+0;sum<6;sum++)
	  {
		scanf("%d",&n);
		if(n==0)break;
		if(n==1){printf("price = 3.00\n");}
		else if(n==2){printf("price = 2.50\n");}
		else if(n==3){printf("price = 4.10\n");}
		else if(n==4) {printf("price = 10.20\n");}
		else{printf("price = 0.00\n");}
		sum++;
    }  
	return 0;
 } 
