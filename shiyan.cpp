#include<stdio.h>
#include<math.h>
    int main()
	{
	int x;
	float y;
	printf("����x��");
	scanf("%d",&x);
	y=pow(x,3.5)+fabs(x-2)+1/x;
	printf("�õ�y=%.3f",y);
	return 0;
    }
