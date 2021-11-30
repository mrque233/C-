#include <stdio.h>
double fibonacci(int n)
{
 if( n == 1 || n == 2)
  return 1;
 else
  return fibonacci(n-1)+fibonacci(n-2);
}

int main(void) {
	int n;
	double result;
	scanf("%d",&n);
	result=fibonacci(n);
	printf("%.0f\n",result);

	return 0;
}
