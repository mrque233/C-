#include <stdio.h>
#define MAXN 10
void ArrayShift( int a[], int n, int m );
int main(void)
{
    int a[MAXN], n, m;
    int i;
    scanf("%d %d", &n, &m);
    for ( i = 0; i < n; i++ ) scanf("%d", &a[i]);
    ArrayShift(a, n, m);
    for ( i = 0; i < n; i++ ) {
        if (i != 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}
void ArrayShift( int a[], int n, int m )
{
	int *p=a,i=0;
	int b[m],c[n-m-1];
	for(i=0;i<m;i++)
	 {
	 	b[i]=*(p+n-m+i);
	 }
    for(i=0;i<n-m;i++)
     {
     	c[i]=*(p+i);
	 }
	for(i=0;i<n;i++)
	 {
	 	if(i<m)
	 	 {
	 	 	a[i]=b[i];
		 }
		if(i>=m)
		 {
		 	a[i]=c[i-m];
		 } 
	 } 
}
