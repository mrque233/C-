#include<stdio.h>
int main()
{
	int n,i=1,j,max=0,x=0;
	scanf("%d",&n);
	if(n>1&&n<=10)
	{
	 i=n+1;
	 int a[i];
	 for(j=0;j<n-1;j++)
	  {
	 	scanf("%d",&a[j]);
	  }
	 for(j=0;j<n;j++)
	  {
	 	max=(max>a[j])?max:a[j];
	  } 
	 for(j=0;j<n;j++)
	  {
	 	if(max==a[j]) 
		 x=j;
	  } 
	}
	printf("%d %d\n",max,x);
	return 0; 
}
