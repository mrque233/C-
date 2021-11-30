#include<stdio.h>
int main()
{
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	if(x+y>z&&x+z>y&&y+z>x)
	{
		printf("Three sides can form a triangle.");
	}
	else
	{
		printf("Three sides can not form a triangle.");
	}
	return 0;
}
