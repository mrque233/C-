#include<stdio.h>
int main()
{
	int n,i=0,j=0,s=0;
	scanf("%d",&n);
	if(n>1&&n<=10)
	{
	int a[n][n];
	for(i=0;i<=n-1;i++)
	 {
	 	for(j=0;j<=n-1;j++)
	 	 {
	 	 	scanf("%d",&a[i][j]);
	 	 	if(i+j!=n-1&&i!=n-1&&j!=n-1) s=s+a[i][j];
		 }
	 }
	 printf("%d",s);
	}

	 return 0;
}
