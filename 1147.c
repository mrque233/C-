#include<stdio.h>
int main(void) {
	int i,j,x,y,k;
	int a[x];
	int b[y];
	scanf("%d",&x);
	for(i=0; i<x; i++)scanf("%d",&a[i]);
	scanf("%d",&y);
	for(i=0; i<y; i++)scanf("%d",&b[i]);

	int n=0,c[x>y?x:y];
	for(i=0; i<x; i++) {
		for(j=0; j<y; j++) {
			if(a[i]==b[j])break;
		}
		if(j==y) {
			for(k=0; k<n; k++) {
				if(a[i]==c[k])break;
			}
			if(k==n)c[n++]=a[i];
		}
	}
	for(j=0; j<y; j++) {
		for(i=0; i<x; i++) {
			if(a[i]==b[j])break;
		}
		if(i==x) {
			for(k=0; k<n; k++) {
				if(b[j]==c[k])break;
			}
			if(k==n)c[n++]=b[j];
		}
	}
	for(i=0; i<n-1; i++)printf("%d ",c[i]);
	printf("%d",c[i]);
	return 0;
}

