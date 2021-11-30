#include<stdio.h>
#include<math.h>
int sdsd(int x)
{
	int a,b,c,d,e;
	e=x/10000%10;
	d=x/1000%10;
	a=x/100%10;
	b=x/10%10;
	c=x%10;
	if((pow(a,3)+pow(b,3)+pow(c,3))==x+pow(d,3)+pow(e,3)&&x>=100&&x<1000) return 1;
	else return 0;
} 
int main()
{
	int m,n,i=1;
	char h;
	scanf("%d%c%d",&m,&h,&n);
	if(n/10000<1)
	{
		for(i=m;i<=n;i++)
	 {
	 	if(sdsd(i)==1) printf("%d ",i);
	 }	
	}

	return 0; 
}
