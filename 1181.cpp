#include<stdio.h>
int main()
{
	int i=0,j=2,n,max=0,f=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	 {
	 	scanf("%d",&a[i]);
	 	max=(max>a[i])?max:a[i];
	 }
	for(i=0;i<n;i++)
	 {
	 	j=2;
	 	while(j<=a[i]-1)
	     {
	     	if(a[i]%j==0) break;
	 	    j++;
	     }
	     if(j>=a[i]) f++;
	 } 
	printf("最大值为%d,共有%d个素数\n",max,f);
	return 0; 
}
