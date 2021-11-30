#include<stdio.h>
#include<math.h>
int main()
{
	int s=0,n,a=0,b=0,i,j=1;
	scanf("%d",&n);
	i=pow(10,n-1);
	for(i=pow(10,n-1);i<=pow(10,n);i++)
	 {
	 	for(j=1;j<=n-1;j++)
	 	 {
	 	 	b=i/(pow(10,j));
	 	 	a=b%10;
	 	 	a=pow(a,n);
	 	 	s=s+a;
	 	 	if(s==i) printf("%d\n",i);
		 }
		j=1; 
	 }
	return 0; 
}
