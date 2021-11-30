#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	double s=0,area=0;
	char x,y;
	scanf("%d%c%d%c%d",&a,&x,&b,&y,&c);
	if(a+b>c&&a+c>b&&b+c>a)
	 {
	 	s=(a+b+c)*0.5;
	 	area=pow(s*(s-a)*(s-b)*(s-c),0.5);
	 }
	printf("%.3f\n",area);
	return 0; 
}
