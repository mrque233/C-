#include<stdio.h>
int main()
{
	int n,i=0,j=0;
	scanf("%d",&n);
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
	 	  for(j=0;j<n;j++)
		   {
		 	printf("%d ",a[i][j]+a[j][i]);
		   } 
	    	printf("\n"); 
	    } 
	return 0; 
}
