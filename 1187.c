#include <stdio.h>
int main(void) {
	int n;
	scanf("%d",&n);
	int a[n][n];
	int x;
	for(int i=0; i<n; i++) {
		for(int m=0; m<n; m++) {
			scanf("%d",&x);
			a[i][m]=x;
		}
	}
	for(int i=0;i<n;i++){
		for(int m=0; m<n; m++) {
			printf("%d ",a[m][i]);
		}
		printf("\n");
	}
	return 0;
}
