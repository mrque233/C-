#include<stdio.h>
struct fushu
{
	int real;
	int image;
};
struct result
{
	int reall;
	int imagee;
};
int main()
{
	struct result q;
	struct fushu p[2];
	int i=0;
	for(i=0;i<2;i++)
	 {
	 	scanf("%d%d",&p[i].real,&p[i].image);
	 }
	 q.reall=p[0].real*p[1].real-p[0].image*p[1].image;
	 q.imagee=p[0].real*p[1].image+p[0].image*p[1].real;
	 return 0; 
}
