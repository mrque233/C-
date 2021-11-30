#include<stdio.h>
#include<string.h>
int main()
{
	char s[81],*p1,*p2;
	int n,j,i,count=0;
	gets(s);
	n=strlen(s); 
	p1=s;p2=s;
	for(i=0;i<n;i++)
	 {
	 	if(*(p1+i)!=*(p2+n-i-1))
	 	 count++; 
	 }
	 if(count==0) printf("YES!");
	 if(count!=0) printf("NO!");
	return 0;   
}

 
