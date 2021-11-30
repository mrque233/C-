
#include <stdio.h>
#include <math.h>
int prime( int p );
int PrimeSum( int m, int n );
int main()
{
    int m, n, p;
    scanf("%d %d", &m, &n);
    printf("Sum of( ");
    for( p=m; p<=n; p++ ) {
        if( prime(p) != 0 )
            printf("%d ", p);
    }
    printf(")=%d\n", PrimeSum(m, n));
    return 0;
}int prime(int p)
{

	int i=2;
	while(i<=p-1)
	 {
	 	if(p%i==0) break;
	 	i++;
	 }
	if(i>=p&&p>=2) return 1;
	if(i<p||p<2) return 0;
}
int PrimeSum(int n,int m)
{
	int i=n,s=0;
	for(i=n;i<=m;i++)
	 {
	 	if(prime(i)==1) s=s+i;
	 }
	return s; 
}
