#include<stdio.h>
int main()
{
	int n,i=0,max,min,s,b,c;
	scanf("%d",&n);
	if(n<=10)
	 {
	 	int a[n];
	 	for(i=0;i<n;i++)
	 	 {
	 	 	scanf("%d",&a[i]);
	 	 	max=a[0];
	 	 	min=a[0];
		 }
		for(i=0;i<n;i++)
		 {
		 	if(max<=a[i])
		 	 {
		 	 	max=a[i];
		 	 	s=i;
			 }
			if(min>=a[i])
			 {
			 	min=a[i];
			 	b=i;
			 } 
		 } 
		a[c]=a[n-1];
		a[n-1]=a[b];
		a[b]=a[c];
		if(s==0)
		{
		 for(i=0;i<n;i++)
         {
            max=(max>a[i])?max:a[i];
		 } 
		printf("%d ",max); 
		for(i=1;i<n;i++)
		 {
		 	printf("%d ",a[i]);
		 }  
		}
	 }
	return 0; 
}
