#include <stdio.h>
int fn( int a, int n );
int SumA( int a, int n );int main()
{
    int a, n;
    scanf("%d %d", &a, &n);
    printf("fn(%d, %d) = %d\n", a, n, fn(a,n));
    printf("s = %d\n", SumA(a,n));
    return 0;
}
#include<math.h>
 int fn( int a, int n )
 {
 	int x=0;
 	for(int i=1;i<=n;i++)
	{
		x+=pow(10,i-1)*a;
    }
    return x;
 }
int SumA( int a, int n )
 {
 	int s=0,x=0;
	for(int i=1; i<=n; i++) {
		s+=pow(10,i-1)*a;
		x+=s;
	}
	return x;
}
