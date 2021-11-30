#include<stdio.h>
int main()
{
	int N,count=0,i=1;
	double aver=0,s=0;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	 {
	 	int x;
	 	scanf("%d",&x);
	 	if(x>=60.0) {count++;}
	 	s=s+x;
	 	s=s*1.0;
	 } 
	aver=s/N; 
	printf("average=%.1f\n",aver);
	printf("count=%d\n",count);
	return 0; 
	 
}
