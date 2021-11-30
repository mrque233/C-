#include<stdio.h>
int main()
{
	int m,n,i=1,r=1,d=1,ms=1,ns=1,ds=1;
	scanf("%d%d",&m,&n);
	while(m>=i)
	 {
	 	ms=ms*i;
	 	i++;
	 }
	while(n>=r)
	 {
	 	ns=ns*r;
	 	r++;
	 }
	while((n-m)>=d)
	 {
	 	ds=ds*d;
	 	d++;
	  } 
	printf("result = %d\n",ns/(ms*ds));
	return 0;
}
