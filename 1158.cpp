#include<stdio.h>
#include<string.h>
int main()
{
	char a[81],n;
	int count=0,i=0;
	gets(a);
	while(a[i]!='\0')
	 {
	 	n=a[i];
	 	if(n>'A'&&n<='Z'&&n!='E'&&n!='I'&&n!='O'&&n!='U')
	 	{
	 		count++;
		}
	 	
	 	i++;
	 }
	printf("%d\n",count);
	return 0; 
}
