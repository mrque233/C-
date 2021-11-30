#include <stdio.h>
#include<math.h>
int fn( int a, int n );
int SumA( int a, int n );
int main()
{
    int a, n;
    scanf("%d %d", &a, &n);
    printf("fn(%d, %d) = %d\n", a, n, fn(a,n));
    printf("s = %d\n", SumA(a,n));
    return 0;
}
int fn(int a,int n)
{
   int z=0,x=0,i=1;
   while(i<=n)
   {
   	x=a*pow(10,i-1);
   	z=z+x;
   	i++;
   }
   return z;	
}
int SumA(int a,int n)
{
   int s=0,x=0,i=1;
   while(n>=i)
    {
 	 x=a+x*10;
 	 s=s+x;
 	 i++;
	}
	return s;
}
