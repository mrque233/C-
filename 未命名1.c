#include <stdio.h>
int main(void)
{
	int i,s;
	s=1;
	i=2;
	do
	{
		s=s+i;
		i=i+1;
		}while(i<=5);
		printf("%d\n",s);
		return 0;
}
