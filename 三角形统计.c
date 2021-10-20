#include<stdio.h>
#include<math.h>
int main(void) {
	int a,b,c,X=0;
	for(a=1; a<=100; a++) {
		for(b=1; b<=100; b++) {
			for(c=1; c<=100; c++) {
				if(a<b&&a*a+b*b==c*c) {
					X++;
				}
			}
		}
	}
	printf("符合条件的三角形个数有%d个",X);
	return 0;
