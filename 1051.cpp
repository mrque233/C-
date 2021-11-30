#include<stdio.h>
int main()
{
	int N,i=1,A=0,B=0,C=0,D=0,E=0;
	scanf("%d",&N);
	if(N<=1000)
	{
	 for(i=1;i<=N;i++)
	 {
	 	int x;
	 	scanf("%d",&x);
	 	if(x>=90) A++;
	 	else if(x>=80&&x<90) B++;
	 	else if(x>=70&&x<80) C++;
	 	else if(x>=60&&x<70) D++;
	 	else E++;
	 }
	}

	printf("%d %d %d %d %d\n",A,B,C,D,E);
	return 0; 
}
