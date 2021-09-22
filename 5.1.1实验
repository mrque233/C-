#include <stdio.h>
int main(void) {
	int i,j,s;
	long sum;
	sum=0; 
	for(i=100; i<=999; i++) {
		j=i;
		s=0;
		while(j!=0) {
			s=s+j%10;
			j=j/10;
		}
		if(s==13)sum+=i;
	}
	printf("%ld\n",sum);
	return 0;
}
