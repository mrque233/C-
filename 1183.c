#include<stdio.h>
int main()
{
	int n;
	scanf("%d\n",&n);
	int t;
	int i;
	int j;
	int k;
	int a[80];
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(j=0;j<(n/2);j++)
	{
	t=a[j];
	a[j]=a[n-j-1];
	a[n-j-1]=t;
    }
	for(k=0;k<n;k++)
	{
	printf("%d ",a[k]);
	}
	return 0;
}
