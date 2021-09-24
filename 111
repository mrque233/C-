
#include<stdio.h>
int main(void) {
	int i,x;
	scanf("%d",&x);
	int a[x],b[x],c[x];
	int *j=a,*m=b,*n=c;
	for(i=0; i<x; i++)scanf("%d",&a[i]);
	for(i=0; i<x; i++)scanf("%d",&b[i]);
	for(i=0; i<x; i++) {
		*n=a[i];
		*(j++)=b[i];
		*(m++)=*(n++);
	}
	for(i=0
