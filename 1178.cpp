#include<stdio.h>
int main()
{
	int i=0;
	double a[10],aver=0;
	for(i=0;i<10;i++)
	 {
	 	scanf("%lf",&a[i]);
	 }
	for(i=0;i<10;i++)
	 {
	 	aver=aver+a[i];
	 } 
	aver=aver*0.1;
	printf("平均值为:%.1lf\n",aver);
	printf("小于平均值的数:");
	for(i=0;i<10;i++)
	 {
	 	if(a[i]<aver)
	 	 {printf("%.1lf ",a[i]*1.0);}
	 } 
	return 0; 
} 
