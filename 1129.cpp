#include<stdio.h>
int lll(int x,int y);
int main()
{
	int x,y;
	scanf("%d^d",&x,&y);
	lll(x,y);
	return 0;
}
int lll(int x,int y)
{
	int min,max,a,b;
	scanf("%d%d",&x,&y);
	max=x>y?x:y;
	min=x>y?y:x;
	for(int m=max;m>1;m++)
	 {
	 	if(m%x==0&&m%y==0)
	 	 {
	 	 	a=m;
	 	 	m=0;
		 }
	 }
	for(int i=1;i<min;i++)
	 {
	 	if(x%i==0&&y%i==0)
	 	 {
	 	 	b=i;
		 }
	 } 
	printf("最小公倍数为%d, 最大公约数为%d\n",a,b);
}
