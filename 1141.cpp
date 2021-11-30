#include<stdio.h>
int sd(char v)
{
	if(v>=97&&v<=122) return v-32;
	else return v;
}
int main()
{
	char v;
	scanf("%c",&v);
	printf("%c",sd(v));
	return 0;
}
