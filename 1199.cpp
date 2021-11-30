#include <stdio.h>
#define MAXS 15

void StringCount( char *s );
void ReadString( char *s ); 

int main()
{
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}
void StringCount( char *s )
{
	int d,x,k,sz,q;
	int i,n;
	for(i=0;*(s+i)!='\0'&&*(s+i+1)!='\0';i++)
	 {
	 	n++;
	 }
	for(i=0;i<n;i++)
	 {
	 	if(*(s+i)>='A'&&*(s+i)<='Z')
	 	 d++;
	 	if(*(s+i)>='a'&&*(s+i)<='z')
		 x++;
		if(*(s+i)>='0'&&*(s+i)<='9')
		 sz++;
		if(*(s+i)==' ')
		 k++;
		else
		 q++;    
	 } 
	 printf("%d %d %d %d %d",d,x,sz,k,q);
}
void ReadString( char *s )
{
	int i;
	for(i=0;i<MAXS;i++)
	 {
	 	scanf("%c",*(s+i));
	 }
}
