#include<stdio.h>
int main()
{
	int n,i=2;
	scanf("%d",&n);
	while(i<=n-1)
	 {
	 	if(n%i==0) break;
	 	i++;
	 }
	if(i>=n)
	 printf("Yes\n");
	else
	 printf("No\n");
	return 0;   
}
