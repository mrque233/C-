#include <stdio.h>
int narcissistic( int number );
void PrintN( int m, int n );
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);
    return 0;
}
int narcissistic(int number)
{
	int m,n,i,s=0;
	m=number;
	if(m>=10)
	{
	 for(i=1;i<=5;i++)
	 {
	 	if(m/10<=10)
	 	 n=m;
	 	m=m/10; 
	 }
	 s=s+n*n*n+narcissistic(number/10); 
	}
    if(m<10)
     {
     	s=s+m*m*m;
	 }
	if(s==number) return 1; 
	else return 0;
}
void PrintN( int m, int n )
{
	int i=m;
	for(i=m+1;i<=n;i++)
	 {
	 	if(narcissistic(i)==1&&m<=n&&m>=1&n<=10000) printf("%d\n",i);
	 }
}
