#include<stdio.h>
#include<string.h>
void change(char *cp,int n);
int main()
{
	char s[81],*cp;
	int n;
	gets(s);n=strlen(s);cp=s;
	change(cp,n);
	return 0;
}
void change(char *cp,int n)
{
	int i=0;
	for(i=0;i<n;i++)
	 {
	 	if(*(cp+i)>='a'&&*(cp+i)<='z') *(cp+i)=*(cp+i)-32;
	 }
	for(i=0;i<n;i++)
	 {
	 	printf("%c",*(cp+i));
	 } 
}
