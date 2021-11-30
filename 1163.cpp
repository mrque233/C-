#include<stdio.h>
int z(char t);
int main()
{
	char s[30],t;
	int i=0;
	gets(s);
	t=s[i];	
	while(t!='#')
	{
		t=s[i];
		s[i]=z(t);
		i++;
	}
	puts(s);
	return 0;
}
int z(char t)
{
	char ch;
	ch=t;
	if(ch>=65&&ch<=90)
	 {
	 	ch=ch+32;
	 	return ch; 
	 }
	if(ch>=97&&ch<=122)
	 {
	 	ch=ch-32;
	 	return ch; 
	 } 
	if(ch==35)
	{
	    return 32;	
	}
	else return ch; 
}
