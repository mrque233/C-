#include<stdio.h>
#include<string.h>
int sstrcmp(char *p1,char *p2)
{
	for(;*p1==*p2 && *p1;p1++,p2++);
	return (*p1-*p2);
}
int main()
{
	char str1[81],str2[81];
	gets(str1);
	gets(str2);
	printf("%d",sstrcmp(str1,str2));
	return 0;
}
