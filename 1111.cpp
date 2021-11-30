#include <stdio.h>
#define MAXN 20

void strmcpy( char *t, int m, char *s );
void ReadString( char s[] ); 

int main()
{
    char t[MAXN], s[MAXN];
    int m;

    scanf("%d\n", &m);
    ReadString(t);
    strmcpy( t, m, s );
    printf("%s\n", s);

    return 0;
}
void strmcpy( char *t, int m, char *s )
{
     while((*(t+m-1)=*s)!='\0')
      {
      	t++;s++;
	  }
}
void ReadString( char s[] )
{
	gets(s);
}
