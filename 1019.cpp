#include<stdio.h>
int main()
{
	int t,n;
	float l;
	scanf("%f%d",&l,&t);
	n=(t-t%5);
	if(l>=0&&l<=3) printf("%.0f\n",(n*0.4+10));
	else if(l>3&&l<=10) printf("%.0f\n",(n*0.4+10+(l-3)*2.0));
	else printf("%.0f\n",(n*0.4+24+(l-10)*3.0));
	return 0;
}
