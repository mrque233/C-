#include<stdio.h>
int main()
{
	char c;
	scanf("%c",&c);
	if(c==32) printf("%c is a space.\n",c);
	else if(c>=48&&c<=57) printf("%c is a digit.\n",c);
	else if((c>=65&&c<=90)||(c>=97&&c<=122)) printf("%c is a letter.\n",c);
	else printf("%c is not a digit or a letter or a space.\n",c);
	return 0;
}
