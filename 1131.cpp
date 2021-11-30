#include<stdio.h>
#include<math.h>
int zz(int A,int b)
{
	return pow(A,b);
}
double z(int A,int b)
{
	return pow(A,b);
}
int main()
{
	int A,b;
	scanf("%d%d",&A,&b);  
	if(b>=0) printf("%d的%d次方为%.2f\n",A,b,zz(A,b)*1.0);
	else printf("%d的%d次方为%.2f\n",A,b,z(A,b));
	return 0;
}
