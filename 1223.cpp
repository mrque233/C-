#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *month[12]={"January","Februar","March","April","May","June","July","Auguest","September","October","November","December"};
	int n;
	printf("请输入月份号：\n");
	scanf("%d",&n);
	if(n>=1&&n<=12)
	 {
	 	printf("%d 月的英文是 %s.\n",n,*(month+n-1));
	 }
	else
	    printf("没有 %d 月.\n",n);
	return 0;	 
}

