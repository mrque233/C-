#include<stdio.h>
int main()
{
	int n,j=0,i=0,temp,index;
	scanf("%d",&n);
	if(i<10)
	{
	char a[n+1];
	for(i=0;i<n+1;i++)
	 {
	 	scanf("%c",&a[i]);
	 }
	for(i=0;i<n+1;i++)
         {  
          index=i;	
          for(j=i+1;j<n+1;j++)                  
          if(a[j]<a[index])  index=j;   
          temp=a[index];
          a[index]=a[i];
          a[i]=temp;
         } 
    printf("输出排序后的数组元素：");     
	for(i=0;i<n+1;i++)
	 {
	 	if(i==0) printf("%c",a[i]);
	 	if(i!=0) printf("%c ",a[i]);
	 }	   
	}
	
	return 0; 
}
