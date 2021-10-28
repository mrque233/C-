#include <stdio.h>
int gcd(int x, int y);
int main(void) {
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d\n", gcd(x, y));
	return 0;
}
int gcd( int x, int y )
{
int t;
    while(y)
    {
        t=x%y;
        x=y;
        y=t;
    }
    return  x;
}
