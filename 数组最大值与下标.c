#include <stdio.h>
int main()
{
  int n,i,j;
  scanf("%d",&n);
  int num[n];
  for(i=0;i<n;i++)
  {
  	scanf("%d",&num[i]);
  }
  j=0;
   for(i=1;i<n;i++)
   {
   	if(num[i]>num[j])
   	{
   	j=i;
    }
}
printf("%d %d",num[j],j);
	return 0;
}
