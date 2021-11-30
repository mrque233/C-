#include <stdio.h>
#include <string.h>
#define MAXN 20
int palindrome( char *s );
int main()
{
    char s[MAXN];
    scanf("%s", s);
    if ( palindrome(s)==1 )
        printf("Yes\n");
    else
        printf("No\n");
    printf("%s\n", s);
    return 0;
}
int palindrome( char *s )
{
    int i,j,n,m;
	char f[MAXN];
	for(i=0;*(s+i)!='\0';i++)
	 {
	 	f[i]=*(s+i);
	 }
	 n=strlen(f);m=n,j=n-1;
	 for(i=0;i<n;i++,j--)
	  {
	  	if(*(s+i)==f[j])
	  	 {
	  	 	m--;
		 }
	  }   
	  if(m==0)
	   return 1;
	  else
	   return 0; 
}
