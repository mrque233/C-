#include<stdio.h>
#include <stdio.h>
#define MAXN 20
void CountOff( int n, int m, int out[] );
int main(void)
{
    int out[MAXN], n, m;
    int i;
    scanf("%d %d", &n, &m);
    CountOff( n, m, out );   
    for ( i = 0; i < n; i++ )
        printf("%d ", out[i]);
    return 0;
}
void CountOff( int n, int m, int out[] )
{
	int i,j,k,a[n];
	for(i=0;i<n;i++)
	 {
	 	a[i]=i+1;
	 }
	 i=0;j=0;k=0;
	while(j<n-1)
	 {
	 	if(a[i]!=0)
		 {
		 	k++;
		 }
	 	if(k==m)
	 	 {
	 	 	out[j]=a[i];k=0;j++;
		 }
		i++;
		if(i==n) i=0; 
	 } 
}
