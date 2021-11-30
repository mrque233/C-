#include <stdio.h>
#include <stdlib.h>
void swap(int*a,int*b)
{
	int tmp;
    tmp = *a;
	*a = *b;   
	*b = tmp;
}
int main(){
	int i,j,k,n;
	scanf("%d",&n);
	int A[n];
	int B[n];
		for(i=0;i<n;i++){
			scanf("%d",&A[i]);
		}
		for(j=0;j<n;j++){
			scanf("%d",&B[j]);
		}
	for(k=0;k<n;k++){
		swap(&A[k],&B[k]);
	}
		for(i=0;i<n;i++){
			printf("%d ",A[i]);
		}
		printf("\n");
		for(j=0;j<n;j++){
			printf("%d ",B[j]);
		}
	return 0;
}
