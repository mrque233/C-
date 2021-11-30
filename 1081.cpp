#include<stdio.h>
#include<math.h>
int main()
{
	int i=1,n=-1,a=1;
	double s=1,b=0;
	for(i=1;i<=1000;i++)
	 {
	 	if(i%2==0)
	 	 {
	 	 	b=n/(a+3*pow(2.0,i-1));
	 	 	s=s+b;
	 	    n=-n;
		 }
	 }
	printf("sum=%f",s);
	return 0; 
}
