#include<stdio.h>
int main()
{
	int n,m,i=0,j=0;
	scanf("%d%d",&m,&n);
	if(n>=1&&n<=6)
	{
	int a[n][n];
	for(i=0;i<n;i++)
	 {
	 	for(j=0;j<n;j++)
	 	 {
	 	 	scanf("%d",&a[i][j]);
		 }
	 }
	 for(i=0;i<n;i++)
	  {
	  	
	 	for(j=n-m;j<n;j++)
	 	 {
	 	 	printf("%d ",a[i][j]);
		 }
		 for(j=0;j<n-m-1;j++);
	     {
	     	printf("%d ",a[i][j]);
		 } 
		 printf("\n");
	  } 
	}
	return 0;
}
