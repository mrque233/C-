#include <stdio.h>
int main(void) {
	int a[3][3];
	int x;
	for(int i=0; i<3; i++) {
		for(int m=0; m<3; m++) {
			scanf("%d",&x);
			a[i][m]=x;
		}
	}
	for(int i=0;i<3;i++){
		for(int m=0; m<3; m++) {
			printf("%d ",a[m][i]);
		}
		printf("\n");
	}
	return 0;
}
