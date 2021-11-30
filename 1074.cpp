#include<stdio.h>
int main()
{
	int a=1,b=1,c=1,count=0;
	for(a=1;a<200;a++)
	 {
	 	for(b=1;b<40;b++)
	 	 {
	 	 	for(c=1;c<20;c++)
	 	 	{
	 	 		if(a+b*5+c*10==200)
	 	 		 {
	 	 		 	count++;
				 }
			}
		 }
	 }
	printf("%d",count);
	return 0; 
}
