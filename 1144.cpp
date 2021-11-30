#include<stdio.h>
int main()
{
	char s[81],t;
	int i=0,n=0;
	gets(s);
	t=s[i];
	for(i=0;i<50;i++)
	 {
	 	t=s[i];
	 	if(t==32)
	 	 n++;
	 }
	printf("%d\n",n+1);
	return 0; 
}
