#include <stdio.h>
#define MAXN 10
void sort( int a[], int n );
int main()
{
    int i, n;
    int a[MAXN];
    scanf("%d", &n);
    for( i=0; i<n; i++ )
        scanf("%d", &a[i]);
    sort(a, n);
    printf("After sorted the array is:");
    for( i = 0; i < n; i++ )
        printf(" %d", a[i]);
    printf("\n");
    return 0;
}
void sort( int a[], int n )
{
	int temp,index,i=0,j=0;
	for(i=0;i<n;i++)
	 {
	 	index=i;
	 	for(j=i+1;j<n;j++)
	 	 {
	 	 	if(a[j]<a[index])
	 	 	 {
	 	 	  index=j;	
              temp=a[index];
              a[index]=a[i];
              a[i]=temp;
			 }
		 }
	 }
	return ; 
}
