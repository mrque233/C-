#include<stdio.h>
void change(int *p1,int *p2,int n);
int main()
{
	int *p1,*p2,n,i=0;
	scanf("%d",&n);
	if(n<=10)
	{
    int a[n],b[n];
    for(i=0;i<n;i++)
     {
     	scanf("%d",&a[i]);
	 }
	 for(i=0;i<n;i++)
	  {
	  	scanf("%d",&b[i]);
	  }
	p1=a;p2=b;
    change(p1,p2,n);	  
	}

	return 0; 
}
void change(int *p1,int *p2,int n)
{
	int c[n],i=0;
	for(i=0;i<n;i++)
	 {
	 	c[i]=*(p1+i);
	 	*(p1+i)=*(p2+i);
	 	*(p2+i)=c[i];
	 }
	for(i=0;i<n;i++)
	 {
	 	printf("%d ",*(p1+i));
	 } 
	 printf("\n");
	for(i=0;i<n;i++)
	 {
	 	printf("%d ",*(p2+i));
	 } 
}
