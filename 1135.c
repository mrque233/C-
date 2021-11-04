#include<stdio.h>
int mm(int x) {
	int a=0,b=1,c;
	for(int i=1; i<=x-1; i++) {
		c=a+b;
		a=b;
		b=c;
	}
	return b;
}
int main(void) {
	int  x;
	scanf("%d",&x);
	for(int i=1; i<=x-1; i++) {
		printf("%d,",mm(i));
	}
	printf("%d",mm(x));
	return 0;
}
