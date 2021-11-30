#include<stdio.h>
struct xy
{
	float x;
	float y;
};
int main()
{
	struct xy s[2];
	int i;
	float m,n;
	for(i=0;i<2;i++)
	 {
	 	scanf("%f %f",&s[i].x,&s[i].y);
	 }
	 m=s[0].x+s[1].x;
	 n=s[0].y+s[1].y;
	printf("(%.1f,%.1f)\n",m,n);
	return 0;
}
