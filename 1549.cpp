#include<stdio.h>
int main()
{
	int n;
	double x=0,a=1,b=2,i=1,c=0;
	scanf("%d",&n);
	while(n>=i)
	 {x=x+(b/a);
	  c=a;
	  a=b;
	  b=b+c;
	  i++;
	 }
	printf("%.2lf\n",x);
	return 0; 
}
