#include<stdio.h>
#include<math.h>
int abab(int x) 
{
	int n,a,b,c;
	a=x%10;
	b=x/10%10;
	c=x/100%10;
	n=pow(a,3)+pow(b,3)+pow(c,3);
	if(n==x) return 1;
	else return 0;
}
int main()
{
	int m,n,i;
	scanf("%d%d",&m,&n);
	i=m;
	for(i=m;i<=m;i++)
	 {
	 	if(abab(i)==1) printf("%d\n",i);
	 }
	return 0; 
}
