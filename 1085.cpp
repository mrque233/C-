#include<stdio.h>
int main()
{
	int n,m,i,j=2;
	char c;
	scanf("%d%c%d",&m,&c,&n);
	i=m;
	for(i=m;i<=n;i++)
	 {
      for(j=2;j<=i-1;j++)
	  {
	 	if(i%j==0) break;
	  }
	  if(j>=i&&i%10==7) printf("%d ",i);
	 }
	return 0; 
}
