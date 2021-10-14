#include<stdio.h>
int main(void) {
	int x,y;
	scanf("%d",&x);
	for(int a=1; a<=x; a=a+2) {
		for(int i=1; i<=x-a; i++) {
			printf(" ");

		}
		for(int b=1; b<=a; b++) {
			printf("* ");
		}
		printf("\n");
	}
	for(int a=x-2; a>=1; a=a-2) {
		for(int i=x-a; i>=1; i--) {
			printf(" ");

		}
		for(int b=a; b>=1; b--) {
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}
