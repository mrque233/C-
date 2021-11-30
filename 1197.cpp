#include <stdio.h>
#define MAXN 20

void delchar( char *str, char c );
void ReadString( char s[] ); 

int main()
{
    char str[MAXN], c;

    scanf("%c\n", &c);
    ReadString(str);
    delchar(str, c);
    printf("%s\n", str);

    return 0;
}
void delchar( char *str, char c )
{
	int i=0;
	while(*(str+i)!='\0')
	 {
	 	*(str+i)=*(str+i);
	 	if(*(str+i)==c)
	 	 {
	 	 	i++;
		 }
	 }
}
void ReadString( char s[] )
{
	gets(s);
}
