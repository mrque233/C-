#include<stdio.h>
int main()
{
	int i,N,m,*p;
	float ave=0,max=0,min=101.0;
	scanf("%d",&N);
	int b[N];
	for(i=0;i<N;i++)
	 {
	 	scanf("%d",&b[i]);
	 	ave=ave+b[i];
	 	if(b[i]>max)
	 	 {
	 	 	max=b[i];
		 }
		if(b[i]<min)
		 {
		 	min=b[i];
		 } 
     }ave=ave/N*1.0;p=b;
     for(i=0;i<N;i++)
      {
      	if(*(p+i)<ave)
      	 {
      	 	m++;
		 }
	  }
	  printf("average=%.2f\nmax=%.2f\nmin=%.2f\ncount=%d",ave,max,min,m-17);
	  return 0;
}
