#include <stdio.h>
#include <string.h>

#define MAXN 20
int palindrome( char *s );

int main()
{
    char s[MAXN];

    scanf("%s", s);
    if ( palindrome(s)==1 )
        printf("YES!\n");
    else
        printf("NO!\n");
    return 0;
}
int palindrome( char *s )
{
int i,len,j;
 len=strlen(s);
 for(i=0,j=len-1;i<j;i++,j--)
  {
  if(s[i]!=s[j])
   return 0;
   }
   return 1;
   }
