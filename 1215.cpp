#include<stdio.h>
#include<string.h>
void strmcpy(char s[],char t[],int m);
int main()
{
	char s[80],t[80];
	int m,i=0;
	gets(t);scanf("%d",&m);
	strmcpy(s,t,m);
	return 0;
}
void strmcpy(char s[],char t[],int m)
{
	char *p1,*p2;
	int n,i=0;n=strlen(t);p1=s,p2=t;
	for(i=0;i<=n-m;i++)
	 {
	 	*(p1+i)=*(p2+i+m-1);
	 }
	 for(i=0;i<=n-m;i++)
	  {
	  	printf("%c",*(p1+i));
	  }
}
