#include<stdio.h>
int main()
{
	int n,i=0,j=0;
	scanf("%d",&n);
	if(n>2&&n<10);
	 {
	 	int a[n][n];
	 	 for(i=0;i<n;i++)
	 	  {
	 	  	for(j=0;j<n;j++)
	 	  	 {
	 	  	 	if(i==j||j==0)
	 	  	 	 {
	 	  	 	 	a[i][j]=1;
				 }
				if(i>j&&j!=0)
				 {
				 	a[i][j]=a[i-1][j]+a[i-1][j-1];
				 } 
			 }
		  }
		  for(i=0;i<n;i++)
		   {
		   	 for(j=0;j<n;j++)
		   	  {
		   	  	if(i>=j)
		   	  	 {
		   	  	 	printf("%d ",a[i][j]);
				 }
		   	  	
			  }
			  printf("\n");
		   }
	 }
	return 0; 
}
