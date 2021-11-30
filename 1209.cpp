#include<stdio.h>
int q(int *b,int n);
int main()
{
	int n,i=0;
	scanf("%d",&n);
	if(n<=10)
	 {
	 	int a[n];
	 	for(i=0;i<n;i++)
	 	 {
	 	 	scanf("%d",&a[i]);
		 }
		 q(a,n);
	 }
	
	return 0; 
}
int q(int *b,int n)
{
	int j,c;
	j=n-1;
	for(j=n-1;j>=0;j--)
	 {
	 	printf("%d ",b[j]);
	 } 
}
