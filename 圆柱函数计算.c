#include<stdio.h>
#define PI 3.14
float v(float r,float h){
	return PI*r*r*h;
}
int main(void) {
	float r,h;
	scanf("%f %f",&r,&h);
	printf("%.3f",v(r,h));
	return 0;
}
