#include<stdio.h>
#include<string.h>
void fun(char a[]);
int main(void)
{
    char a[80];
    gets(a);
    fun(a);
    puts(a);
	return 0;     
 }
void fun(char a[])
{
	int j,n,i=0;
	char t;
	n=strlen(a);
	j=n-1;
	if((n-1)%2==0)
	{
	 for(i=0;i<(n-1)/2;i++)
	 {
	 	t=a[i];
	 	a[i]=a[j];
	 	a[j]=t;
	 	j--;
	 }
	}
	if((n-1)%2!=0)
	{
	 for(i=0;i<n/2;i++)
	 {
	 	t=a[i];
	 	a[i]=a[j];
	 	a[j]=t;
	 	j--;
	 }
	}
	 return;
}
