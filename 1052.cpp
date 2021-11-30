#include<stdio.h>
#include<math.h>
int g(int n);
int main()
{
	int i=1;
	float s=1.0,b=1.0,x,m,n;
	scanf("%d",&x);
	if(x>=0&&x<=5)
	 {
	 	m=pow(x,i);n=g(i);
	 	b=m/n*1.0;
	 	for(i=1;b>=0.0001;i++)
	 	 {
	 	 	s=s+b;
		 }
		 printf("%.4f",s);
	 }
	 
	 return 0;
}
int g(int n)
{
	int i=1,s=1;
	for(i=1;i<=n;i++)
	 {
	 	s=s*i;
	 }
	return s; 
}
