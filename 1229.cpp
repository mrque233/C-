#include<stdio.h>
struct tele
{
	char name[10];
	int brith[8];
	char ph[17];
};
int main()
{
	int N,i,j,index,temp;
	scanf("%d",&N);
	struct tele t[N];
	for(i=0;i<N;i++)
	 {
	 	scanf("%s %s %s",&t[i].name,&t[i].brith,&t[i].ph);
	 }
	 for(i=0;i<N;i++)
		{
			for(j=i+1;j<N;j++)
			 {
			 	if(t[i].brith<t[j].brith)
				 printf("%s %s %s\n",t[i].name,t[i].brith,t[i].ph);
			 }
		  	
		}
		  return 0;
	 
}
