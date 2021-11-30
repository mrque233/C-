#include <stdio.h>
int main(void) 
{
	char a[80];
	int n;
	int i,j;
	gets(a);
	while(a[n]!='\0')
	{
		n++;
	}
	for(i=0;i<n;i++) 
	{
	if(a[i]>='A'&&a[i]<='Z')
         a[i]=155-a[i];
	}
	for(j=0;j<n;j++)
	{
		printf("%c",a[j]);
	}
	return 0;
}
