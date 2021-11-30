#include<stdio.h>
void max(int *p);
int main()
{
	int m,n,i=0,j=0;
	scanf("%d%d",&m,&n);
	int a[m][n];
	for(i=0;i<m;i++)
	 {
	 	for(j=0;j<n;j++)
	 	 {
	 	 	scanf("%d",&a[i][j]);
		 }
	 }
	 int *p;p=a[m][n];
	max(*p); 
	return 0;
}
void max(int *p)
{
	int i=0;
	for(i=0;*(p+i)!='\0';i++)
	 {
	 	if(*(p+i)<*(p+i+1));
	 	 *(p+i)=*(p+i+1);
	 }
	 printf("二维数组中的最大值是%d",*p);
}
