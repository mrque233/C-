#include<stdio.h>
int h(int a[]);
int main()
{
	int a[3][3],i=0,j=0,*p;
	for(i=0;i<3;i++)
	 {
	 	for(j=0;j<3;j++)
	 	 {
	 	 	scanf("%d",&a[i][j]);
		 }
	 }
	p=a[0];
	printf("转置后的矩阵为:\n");
    h(a[0]);
	return 0; 
}
int h(int a[])
{
	int *p,j=0;
	int i=0;
	p=a;
	for(i=0;i<3;i++)
	 {
	 	for(j=0;j<3;j++)
	 	 {
	 	 	printf("%d ",*(p+3*j+i));
		 }
		printf("\n"); 
	 } 
}
