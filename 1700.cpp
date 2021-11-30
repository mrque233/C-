#include<stdio.h>
struct work
{
	int num;
	char name[20];
	float ben;
	float jiang;
	float xian;
	float shi;
};
int main()
{
	int n,i=0;
	scanf("%d",&n);
    struct work w[n];	
	for(i=0;i<n;i++)
	 {
	   scanf("%d%s%f%f%f",&w[i].num,&w[i].name,&w[i].ben,&w[i].jiang,
	         &w[i].xian);w[i].shi=w[i].ben+w[i].jiang-w[i].xian;	
	 }  
	
	for(i=0;i<n;i++)
	 {
	 	printf("%d %s %.2f %.2f %.2f %.2f\n",w[i].num,w[i].name,w[i].ben,w[i].jiang,
	         w[i].xian,w[i].shi);
	 } 
	return 0; 
}
