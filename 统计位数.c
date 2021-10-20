#include<stdio.h>
#include<math.h>
int main(void) {
	int x,count=0,sum=0;
	scanf("%d",&x);
	for(int i=1; x>0; i++) {
		sum+=pow(x%10,3);
		count++;
		x/=10;
	}
	printf("sum=%d,count=%d",sum,count);
	return 0;
}
