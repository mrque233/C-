#include <stdio.h>
int gcd(int x, int y);
int main(void) {
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d\n", gcd(x, y));
	return 0;
}
int gcd(int x,int y)
{
	int min,b;
	min=x>y?y:x;
	for(int i=1;i<=min;i++)
	 {
	 	if(x%i==0&&y%i==0)
	 	 {
	 	 	b=i;
		 }
	 } 
     return b;
}

