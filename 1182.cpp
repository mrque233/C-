#include<stdio.h>
int main()
{
	int n,i=0,j=0,count=0,index=0,temp=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	 {
	 	scanf("%d",&a[i]);
	 	if(a[i]%2!=0)
	 	 {
	 	 	count++;
		 }
	 }
	for(i=0;i<n-1;i++)
        {  
          index=i;	
          for(j=i+1;j<n;j++)                  
          if(a[j]<a[index])  index=j;   
          temp=a[index];
          a[index]=a[i];
          a[i]=temp;
        }
	printf("�����ĸ���Ϊ:%d\n",count);
	printf("����������Ԫ��:");
	for(i=n-1;i>=0;i--)
	 {
	 	printf("%d ",a[i]);
     }	   
    return 0; 
}
