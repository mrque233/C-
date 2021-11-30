#include <stdio.h> 
int reverse( int number ); 
int main()
{
    int n; 
    scanf("%d", &n);
    printf("%d\n", reverse(n)); 
    return 0;
} 
int reverse( int number )
{
	int a,b=1;
	int n=number,s=0,i=1;
	if(number<0)
	{
		if(n<10)
		 {
		 	for(i=1;n/10>10;i++)
		 	 {
		 	 	b=b*10;
			 }
		 	s=a*b+reverse(number/10);
		 }
		return s;
	}
	else
	{	
	    if(n>10)
		 {
		 	for(i=1;n/10>10;i++)
		 	 {
		 	 	b=b*10;
			 }
		 	s=a*b+reverse(number/10);
		 }
		return s;
	}
}
