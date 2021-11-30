#include<stdio.h>
int main()
{
	float a,b;
	double d;
	char c;
	scanf("%d%c%d",&a,&c,&b);
    if(c==43) printf("%d\n",a+b);
    else if(c==45) printf("%d\n",a-b);
    else if(c==42) printf("%d\n",a*b);
    else if(c==47) printf("%d",a/b);
	else printf("Unknown operator\n");
	
	return 0;
}
