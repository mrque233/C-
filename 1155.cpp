#include<stdio.h>
int main()
{
	int s,n,m,i,j,count=0;
	scanf("%d",&n);int b[n];
	if(n<=10)
	 {
	 	for(m=0;m<n;m++)
	 	 {
	 	 	scanf("%d",&s);
	 	 	int a[s][s];
	 	 	for(i=0;i<s;i++)
	 	 	 {
	 	 	 	for(j=0;j<s;j++)
	 	 	 	 {
	 	 	 	 	scanf("%d",&a[i][j]);
				 }
			 }
			 for(i=0;i<s;i++)
			  {
			  	for(j=0;j<s;j++)
			  	 {
			  	 	if(i>j&&a[i][j]!=0)
			  	 	 count++;
				 }
			  }
			  b[m]=count;
		 }
	 }
	 for(i=0;i<m;i++)
	  {
	  	if(b[i]==0)
	  	 printf("YES\n");
	  	else
		 printf("NO\n"); 
	  }
	 return 0;
}
