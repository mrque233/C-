#include<stdio.h>
#include<math.h>
int main()
{
	int x,a,b,c,n;
	scanf("%d",&x);
	a=x%10;
	b=x/10%10;
	c=x/100%10;
	n=pow(a,3)+pow(b,3)+pow(c,3);
	if(n==x) printf("1");
	else printf("0");
	return 0;
}
