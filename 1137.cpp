#include<stdio.h>
int ab(int n)
{
	int i=1,s=0;
	for(i=1;i<n;i++)
	 {
	 	s=s+i;
	 }
}
int main()
{
	int m,n,sum=0,j=1;
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	 {
	 	m=ab(j);
	 	sum=sum+m;
	 }
	printf("sum=%d",sum);
	return 0;
}
