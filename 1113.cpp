#include <stdio.h>
#include <math.h>
int search( int n );
int main()
{
    int number;
    scanf("%d",&number);
    printf("count=%d\n",search(number));								
    return 0;
}
int search( int n )
{
	int i=101,j=1,s=0;
	int a=0,b=0,c=0;
	for(i=101;i<=n;i++)
	 {
	 	for(j=1;j<=fabs(i);j++)
        {
        	a=i%10;
        	b=i/10%10;
        	c=i/100%10;
        	if(((a==b&&a!=c)||(a==c&&a!=b)||(b==c&&a!=b))&&j*j==i)
        	{
        		s++;
			}
		}  
	 }
	 return s;
}
