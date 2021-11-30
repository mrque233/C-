#include<stdio.h>
int main()
{
	int a[4][4],b[4],c[4];
	int i=0,j=0,max,min,flag=0;
	for(i=0;i<4;i++)
	 {
	 	for(j=0;j<4;j++)
	 	 {
	 	 	scanf("%d",&a[i][j]);
		 }
	 }
	 max=a[0][0];min=a[0][0];
	 for(i=0;i<4;i++)
	  {
	  	for(j=0;j<4;j++)
	  	 {
	  	 	min=(min<a[i][j])?min:a[i][j];
		 }
		 b[i]=min;
	  }
	  for(j=0;j<4;j++)
	   {
	   	for(i=0;i<4;i++)
	   	 {
	   	 	max=(max>a[i][j])?max:a[i][j];
		 }
		 c[j]=max;
	   }
	  for(i=0;i<4;i++)
	   {
	   	for(j=0;j<4;j++)
	   	 {
	   	 			
	   	   if(b[i]==c[j])
	   	    {
	   	    	printf("%d-%d-%d\n",i,j,b[i]);
			}
	        flag=1;
	     }
	   } 
	   if(flag==0) printf("Not Found");
	   return 0;
}
