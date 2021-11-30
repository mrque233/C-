#include<stdio.h>
int main()
{
	char ch1,ch2,ch3;
	scanf("%c%c%c",&ch1,&ch2,&ch3);
	ch1=ch1+32;
	ch2=ch2+32;
	ch3=ch3+32;
	printf("%c %c %c\n",ch1,ch2,ch3);
	return 0;
}
