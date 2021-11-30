#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	scanf("%d",&i);
	if(i%3==0||i%5==0)
	{
		printf("%d is a multiple of three or five",i) ;
	 } 
	else
	{
		printf("%d is not a multiple of three or five.",i);
	}
    return 0;
}
