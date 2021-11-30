#include<stdio.h>
int main()
{
	int s=0,i=1,n=1,x=0;
	while(n<=100)
	 {
	 	x=x+i;
	 	s=s+x;
	 	i++;
	 	n++;
	 }
	printf("%ld\n",s);
	return 0; 
}
