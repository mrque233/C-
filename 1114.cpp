#include <stdio.h>  
double fact( int n );  
double factsum( int n );   
int main() 
{      
 int n;       
 scanf("%d",&n);      
 printf("fact(%d) = %.0f\n", n, fact(n));      
 printf("sum = %.0f\n", factsum(n)); 								     
 return 0; 
}
double fact(int n)
{
	int i=1,s=1;
	for(i=1;i<=n;i++)
	 {
	 	s=s*i;
	 }
	 return s;
} 
double factsum(int n)
{
	int i=1,ss=0;
	for(i=1;i<=n;i++)
	 {
	 	ss=ss+fact(i);
	 }
	 return ss;
}
