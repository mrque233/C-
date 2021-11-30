#include <stdio.h>
int fib( int n );
void PrintFN( int m, int n );
int main()
{
    int m, n, t;
    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);
    return 0;
}
int fib( int n )
{
	int i=1,j=1,l=0,k=1;
	for(i=1;i<=n-2;i++)
	 {
	 	l=j;
        j=k;
        k=l+k;
        if(i==n-2) return k;
	 }
}
void PrintFN( int m, int n )
{
	int i=1,j=1,l=0,k=1,count=0;
	for(i=1;i<=n-2;i++)
	 {
	 	l=j;
        j=k;
        k=l+k;
         if(k<=n&&k>=m)
        	{
        	 count++;
        	 printf("%d ",k);
			}
	 }
	 if(count==0) printf("No Fibonacci number");
}

