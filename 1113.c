#include <stdio.h>
#include <math.h>

int search( int n );

int main()
{
    int number;

    scanf("%d",&number);
    printf("count=%d\n",search(number));

    return 0;
}
int search( int n )
{
	int x,y,z,count=0;
	for(int a=10; a<=sqrt(n); a++) {
		int i=a*a;
		x=i/100;
		z=i%10;
		y=(i-100*x)/10;
		if(x==z||x==y||z==y){
			count++;
		}
	}
	return count-1;
}
