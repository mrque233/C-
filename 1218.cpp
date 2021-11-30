#include<stdio.h>
int main()
{
	int a,b,c,*x,*y,*z,*p;
	scanf("%d%d%d",&a,&b,&c);
	x=&a;y=&b;z=&c;
	if(a<b)
	 {
	 	p=x;
	 	x=y;
	 	y=p;
	 }
	if(a<c)
	 {
	 	p=z;
	 	z=x;
	 	x=p;
	 }
	if(b<c)
	 {
	 	p=z;
	 	z=y;
	 	y=p;
	 }  
	printf("%d %d %d",*z,*y,*x);
	return 0; 
}
