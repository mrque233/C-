#include<stdio.h>
int factorsum(int number);
void PrintPN(int m, int n);
int main() {
	int i,m,n;
	scanf("%d %d",&m,&n);
	if(factorsum(m)==m)printf("%d is a perfect number\n",m);
	if(factorsum(n)==n)printf("%d is a perfect number\n",n);
	PrintPN(m, n);
	return 0;
}
int factorsum(int number) {
	int i,sum=0;
	if(number==1)return 1;
	for(i=1; i<number; i++) {
		if(number%i==0)sum+=i;
	}
	return sum;
}
void PrintPN(int m,int n) {
	int count =0;

	for(m; m<=n; m++) {
		if(factorsum(m)==m) {
			if(m==1) {
				printf("%d = 1",m);
				count++;
				if(n==1)return;
				
			} else {
				printf("%d = 1 ",m);
				for(int i=2; i<m; i++)
					if(m%i==0) {
						printf("+ %d ",i);
						count++;
					}
			}
			printf("\n");
		}
	}
	if(count==0)printf("No perfect number");
}
