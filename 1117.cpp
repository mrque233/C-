#include <stdio.h>
int Ack( int m, int n );
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    printf("%d\n", Ack(m, n));
    return 0;
}
int Ack( int m, int n )
{
	int s=0;
	if(m=0)
	 {
	 	s=n+1;
	 }
	if(n=0&&m>0)
	 {
	 	s=Ack(m-1,1);
	 }
	if(m>0&&n>0)
	 {
	 	s=Ack(m-1,Ack(m,n-1));
	 }
	  
} 

