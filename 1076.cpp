#include<stdio.h>
int main()
{
	int x,y,s=0;
	scanf("%d%d",&x,&y);
	while(x<=y)
	 {
	 	s=s+x;
	 	x++;
	 }
	printf("%d\n",s);
	return 0; 
}
