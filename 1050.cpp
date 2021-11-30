#include <stdio.h>
#include<math.h>
int main(void)

{
	int a, s=0,i=1,n=1;
	scanf("%d",&a);
	while(i<=a)
	 {
	 	n=n*i;
	 	s=s+n;
	 	i++;
	 }
	printf("%d\n",s) ;
	return 0;   
}
