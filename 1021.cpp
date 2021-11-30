#include<stdio.h>
int main()
{
	int a,b,hh,mm,c;
	scanf("%d%d",&a,&b);
    a=a%100+(a-a%100)*60/100;
    b=b%100+(b-b%100)*60/100;
    c=b-a;
	hh=(c-c%60)/60;
	mm=c%60;
	printf ("%02d:%02d\n", hh, mm);
	return 0; 
}
