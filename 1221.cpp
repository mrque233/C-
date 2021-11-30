#include<stdio.h>
#include<string.h>
void length(char *cp);
int main()
{
	char a[80],*cp;
	int i=0;
	gets(a);
	 cp=a;
	 length(cp);
	 return 0;
}
void length(char *cp)
{
	int n=0,i=0;
	for(i=0;*(cp+i)!='\0';i++)
	 {
	 	n++;
	 }
	printf("%d",n); 
}
