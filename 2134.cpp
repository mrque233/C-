#include<stdio.h>
int main()
{
	int m,n,i,a=0,b=0,c=0;
	scanf("%d%d",&m,&n);
	i=m;
	for(i=m;i<=n;i++)
	 {
	 	a=i%10;
	 	b=i/10%10;
	 	c=i/100%10;
	 	if(a*a*a+b*b*b+c*c*c==i) printf("%d\n",i);
	 }
	return 0; 
}
