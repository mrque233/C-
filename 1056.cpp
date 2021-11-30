#include<stdio.h>
#include<math.h>
int main()
{
	int h,n,i=1;
	double l=0,H;
	scanf("%d%d",&h,&n);
	while(i<=n)
	 {
	 	l=l+h*3.0/pow(2.0,i);
	 	i++;
	 }
	H=h*pow(0.5,n); 
	l=l-1;
	printf("%.1f %.1f\n",l,H);
	return 0; 
}
