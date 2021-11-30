#include<stdio.h>
int main()
{
	int m,n,*p,s;
	int i,j;
	scanf("%d%d",&m,&n);
	int a[m][n];
	for(i=0;i<m;i++)
	 {
	 	for(j=0;j<n;j++)
	 	 {
	 	 	scanf("%d",&a[i][j]);
		 }
	 }
	 p=a[0];
	 for(i=0;i<m;i++)
	  {
	  	for(j=0;j<n;j++)
	  	 {
	  	 	s=s+*(p+(j*m+i));
		 }
	  }
	  printf("%d",s);
	  return 0;
}
