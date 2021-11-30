#include<stdio.h>
int aa(float r)
{
	float pl=3.14;
	return pl*r*r;
}
int bb(float r)
{
	float pl=3.14;
	return pl*2*r;
}
int main()
{
	float r;
	scanf("%f",&r);
    printf("area=%.2f,",aa(r));
    printf("perimeter=%.2f",bb(r));
	return 0;
}
