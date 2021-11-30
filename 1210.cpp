#include<stdio.h>
int main()
{
	int a[5],i=0,j=0,temp,index,*pa;
	pa=a;
	 	for(i=0;i<5;i++)
	 	 {
	 	 	scanf("%d",&a[i]);
		 }
		for(i=0;i<5;i++)
         {  
          index=i;	
          for(j=i+1;j<5;j++)                  
          if(a[j]<a[index])  index=j;   
          temp=a[index];
          a[index]=a[i];
          a[i]=temp;
         }
		for(i=0;i<5;i++)
		 {
		 		printf("%d ",*(pa+i));
		 } 
	 
	 return 0;
}
