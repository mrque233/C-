#include<stdio.h>
int main()
{
	int n,count=0,i=0;
	scanf("%d",&n);
	int a[10];
	while(n>0)
	 {
	 	if(n%2==0)
	 	 {
	 	 	a[i]=0;
	 	 	n=n/2;
			i++;
			count++;
		 }
		if(n%2!=0)
		 {
		 	a[i]=1;
		 	n=n/2;
		 	i++;
		 	count++;
		 } 
		 
	 }
	for(i=count-1;i>=0;i--)
	 {
	 	printf("%d",a[i]);
	 } 
	return 0; 
}

