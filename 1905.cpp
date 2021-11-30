#include<stdio.h>
int main()
{
	int n,i=0,j=0;
	scanf("%d",&n);
	if(n>=1&&n<=1000)
     {
     	int a[n][n];
     	for(i=0;i<n;i++)
     	 {
     	 	for(j=0;j<n;j++)
     	 	 {
     	 	 	if(i+j<n)
				   {
				   	  a[i][j]=n-j-i;
				   }
				if(i+j>=n)
				   {
				   	  a[i][j]=i+j+2-n;
				   }   
			 }
		 }
	     for(i=0;i<n;i++)
	      {
	  	    for(j=0;j<n;j++)
	  	    {
	  	    	printf("%d ",a[i][j]);
		    }
	    	printf("\n"); 
	  } 
	 }
	  return 0;
}
