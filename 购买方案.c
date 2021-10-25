#include<stdio.h>
#include<math.h>
int main()
{
  int b,y,r;
  for(b=0;b<20;b++)
     for(y=0;y<50;y++)
     {
     	r=50-b-y;
     	if(b*5+y*2+r*1==100)
     	   printf("blue=%d,yellow=%d,red=%d\n",b,y,r);
	 }
	return 0;
 } 
