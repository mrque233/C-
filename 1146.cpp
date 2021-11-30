#include<stdio.h>
int main()
{
	int n,i=0;
	scanf("%d",&n);
	if(n>=1&&n<=10)
	{
		int a[n];
		for(i=0;i<n;i++)
		 {
		 	scanf("%d",&a[i]);
		 }
		for(i=n-1;i>=0;i--)
		 {
		 	if(i>0&&i<=n-1) printf("%d ",a[i]);
		 	if(i==0) printf("%d",a[i]);
		 } 
	}
	return 0;
}
