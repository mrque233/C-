#include<stdio.h>
int main()
{
	int b=0,n,i=0,j=0;
	scanf("%d",&n);
	int a[n][n];
    for(i=0;i<4;i++)
     {
     	for(j=0;j<4;j++)
     	 {
     	 	scanf("%d",&a[i][j]);
		 }
	 }
	for(j=0;j<4;j++)
	 {
	 	for(i=0;i<4;i++)
	 	 {
	 	 	printf("%d ",a[i][j]);
		 }
		 printf("\n");
	 } 
	return 0; 
}
