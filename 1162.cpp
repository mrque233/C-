#include<stdio.h>
int main()
{
	int x,a,b,c,d,i=1,m;
	scanf("%d",&x);
	d=x%10,c=x/10%10;b=x/100%10,a=x/1000%10;
	d=(d+9)%10,c=(c+9)%10,b=(b+9)%10,a=(a+9)-10;

    int h[4]={c,d,a,b};
 
	printf("The encrypted number is "); for(i=0;i<4;i++)printf("%d",h[i]);
}
