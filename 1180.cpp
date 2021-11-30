#include<stdio.h>
int main()
{
	int n,i=0,j=0,temp,index,a[6]={6,9,10,12,15};
	scanf("%d",&n);
	a[5]=n;
		for(i=0;i<6;i++)
         {  
          index=i;	
          for(j=i+1;j<6;j++)                  
          if(a[j]<a[index])  index=j;   
          temp=a[index];
          a[index]=a[i];
          a[i]=temp;
         }  
        printf("插入后的数组元素：\n");
        for(i=0;i<6;i++)
		 {
		 	if(i!=0)
		 	{
		 			 	printf(" %d",a[i]);
			 }
			if(i==0)
			 {
			 	printf("%d",a[i]);
			  } 
	
		 } 
	 return 0;
}
