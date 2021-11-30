#include<stdio.h>
#include<string.h>
void delchar(char s[],char c);
int main()
{
	char s[80],c;
	gets(s);scanf("%c",&c);
	delchar(s,c);
	return 0;
}
void delchar(char s[],char c)
{
	int n,j=0,i=0;
	n=strlen(s);
	char *cp,*p1,a[n];cp=s;
	for(i=0;i<n;i++)
	 {
	 	if(*(cp+i)!=c)
	 	 {
	 	 	a[j]=*(cp+i);j++;
		 } 
	 }
	 p1=a;
	for(i=0;a[i]!='\0';i++)
	 {
	 	printf("%c",*(p1+i));
	 } 
}
