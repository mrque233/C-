#include <stdio.h>
#include <math.h>
double funcos(double e, double x);
int main() {
	double e, x;
	scanf("%lf %lf", &e, &x);
	printf("cos(%.2lf) = %lf\n", x,funcos(e, x));
	return 0;
}
double funcos( double e, double x ) {
	int f=1,i=0;
	double ji(int a);
	double sum=0,t=1;
	for(i=0; t>e; i=i+2,f=-f) {
		t=pow(x,i)/ji(i);
		sum+=f*t;
	}
	return sum;
}
double ji(int a) {
	int i;
	double sum=1;
	for(i=1; i<=a; i++) {
		sum*=i;
	}
	return sum;
}

