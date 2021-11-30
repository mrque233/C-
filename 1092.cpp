#include <stdio.h> 
int sum(int m, int n); 
int main()
{   
    int m, n; 
    scanf("%d %d", &m, &n);
    printf("sum=%d", sum(m, n));
     return 0;
}
int sum(int m,int n)
{
	if(m<n)
	 for(;n<=m;n++)
	  {
	  	sum=sum+n;
	  } 
	 
}
