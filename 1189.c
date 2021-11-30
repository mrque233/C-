#include<stdio.h>
int main(void) 
{
	char a[80];
	int n;
	int k;
	gets(a);
	while(a[n]!='\0')
	{
		n++;
	}
	scanf("%d",&k);
	for(int i=0;i<k-1;i++)
	{
	 printf("%c",a[i]);	
	}
	for(int j=k;j<n;j++)
	{
	 printf("%c",a[j]);	
	}
	return 0;
}
