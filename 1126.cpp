#include<stdio.h>
int ab(int n)
{
	int i=1,s=1;
	for(i=i;i<=n;i++)
	 {
	 	s=s*i;
	 }
	 return s; 
}
int main()
{
	int m=0,n,j=1;
	scanf("%d",&n);
	double S=0;
	for(j=1;j<=n;j++)
	 {
	 	m=ab(j);
	 	S=S+m*1.0;
	 }
	printf("%.6f",S);
	return 0; 
}
