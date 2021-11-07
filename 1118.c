#include <stdio.h>

int f( int n );

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", f(n));

    return 0;
}
    int f( int n ){
	int a=0,b=1,c,i;
	if(n==1) a=1;
	else if(n==2) a=2;
else{
    for(i=1; i<=n+1; i++) {
		c=a+b;
		a=b;
		b=c;
	}
}
	return a;
}
