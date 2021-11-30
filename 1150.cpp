#include<stdio.h>
int main()
{
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int b[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	int x,y,z,d=0,i;
	char q,w;
	scanf("%d%c%d%c%d",&x,&q,&y,&w,&z);
	if(x%400==0||(x%4==0&&x%100!=0))
	 {
	 	for(i=1;i<y;i++)
	 	 {
	 	 	d=d+b[i];
		 }
		d=d+z; 
	 }
	else
	 {
	 	for(i=1;i<y;i++)
	 	 {
	 	 	d=d+a[i];
		 }
		d=d+z; 
	 } 
	printf("%d\n",d); 
}
