#include<stdio.h>
int main()
{
	int N,x=0,a=1,b=0,c=0,s=1,m=1;
	scanf("%d",&N);
	s=a+b+c;
	if(N<=10000)
	{
	 for(s=1;s<=N;m++)
	 {
	    
	    c=c+b;
		x=a;
	    a=c;
	    b=x;
	    s=a+b+c;
	 }
	}
	
	printf("%d\n",m);
	return 0; 
}
