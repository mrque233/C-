#include<stdio.h>
#include<string.h>
int main(void)
{
	int i,n;
	char word[30];
	gets (word);
	n=strlen(word);
	word[n-1]='\0';
	for(int i=0;i<n;i++)
	{
	if(word[i]>='a'&&word[i]<='z')
	word[i]=word[i]-32;
	else if(word[i]>='A'&&word[i]<='Z')
	word[i]=word[i]+32;
    }
	for(int i=0;i<n;i++)
	{
		printf("%c",word[i]);
	}
}

