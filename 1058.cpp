#include<stdio.h>
int main()
{
	int N,i=1,s=1;
	scanf("%d",&N);
	while(N>i)
	 {
	 	s=(s+1)*2;
	 	i++;
	 }
	printf("%d\n",s);
	return 0; 
}
