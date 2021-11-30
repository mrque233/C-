#include<stdio.h>
int main()
{
	int i=0,j=0,l=0,n,m,s[20],f=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
     {
     	scanf("%d",&a[i]);
	 }
	 scanf("%d",&m);int b[m];
	 for(i=0;i<m;i++)
	  {
	  	scanf("%d",&b[i]);
	  }
	  for(i=0;i<n;i++)
	   {
	   	for(j=0;j<m;j++)
	   	 {
	   	 	if(a[i]==b[j]) f++;
		 }
		 if(f==0)
		  {
		  	s[l]=a[i];l++;
		  }
		  f=0;
	   }
	   for(i=0;i<20;i++)
	    {
	    	printf("%d ",s[i]);
		}
		return 0;
}
