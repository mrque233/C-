#include<stdio.h>
int main()
{
	int n,i=0,j=0,temp,index;
	scanf("%d",&n);
	if(n<=10&&n>=1)
	 {
	 	int a[n];
	 	for(i=0;i<n;i++)
	 	 {
	 	 	scanf("%d",&a[i]);
		 }
		for(i=0;i<n;i++)
         {  
          index=i;	
          for(j=i+1;j<5;j++)                  
          if(a[j]<a[index])  index=j;   
          temp=a[index];
          a[index]=a[i];
          a[i]=temp;
         }  
		for(i=n-1;i>=0;i--)
		 {
		 	if(i!=0)
		 	{
		 		printf("%d ",a[i]);
			}
		 	else
		 	{
		 		printf("%d",a[i]);
			}
		 }  
	 }
	 return 0;
}
