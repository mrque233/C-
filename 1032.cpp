#include<stdio.h>
int main()
{
	int lower,upper;
	double celsius;
	scanf("%d%d",&lower,&upper);
	printf("fahr celsius:\n");
	if(lower<=upper&&upper<=100)
	 {
	 	while(lower<=upper)
	 	 {
	 	 	printf("%d   %.1f\n",lower,(lower-32.0)*5.0/9.0);
	 	 	lower=lower+2;
		  }
	 }
	else
	 printf("Invalid.") ;
	return 0; 
}
