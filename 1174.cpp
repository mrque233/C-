#include<stdio.h>
#include<string.h>
int z(char t);
int main()
{
	char s[80],t;
	int i=0,j=0;
	gets(s);
	j=strlen(s);
	for(i=0;i<j;i++)
	 {
	 	t=s[i];
	 	s[i]=z(t);
	 }
	puts(s);
	return 0; 
}
int z(char t)
{
	char ch;
	ch=t;
	if(ch>=65&&ch<=77)
	 {
	 	ch=77+(77-ch)+1;
	 	return ch; 
	 }
	if(ch>=78&&ch<=90)
	 {
	 	ch=65+(90-ch);
	 	return ch; 
	 } 
	else return ch; 
}
