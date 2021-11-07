#include <stdio.h>
#define MAXS 15
void StringCount( char s[] );
void ReadString( char s[] );
int main()
{
    char s[MAXS];

    StringCount(s);

    return 0;
}
    void StringCount( char s[] )
{
    int MAX = 0;
    int i = 0;
    gets(s);
    while(s[i] != '\0')
    {
        MAX += 1;
        i += 1;
    }
	int a=0,b=0,c=0,d=0;
for(int i=0;i<MAX;i++)
{
	if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')a++;
	else if(s[i]==' ') b++;
	else if(s[i]>='0'&&s[i]<='9') c++;
	else d++;
}
printf("letter = %d, blank = %d, digit = %d, other = %d",a,b,c,d);

}
