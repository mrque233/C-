#include <stdio.h>
int factorial(int n) 
{
	int s=n;
	if(n>2)
	 {
	    s=s*factorial(n-1);
	 }
	if(n==1)
	 {
	 	s=s*1;
	 }
	 return s;
}
int main(void)
{
    int n,result;
    scanf("%d", &n);
    result=factorial(n);
    printf( "%d\n",result);
    return 0;
}
