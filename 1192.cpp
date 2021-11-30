#include <stdio.h>
#include <string.h>
#define MAXS 10
void Shift( char s[] );
void GetString( char s[] ); 
int main()
{
    char s[MAXS];
    GetString(s);
    Shift(s);
    printf("%s\n", s);				
    return 0; 
}
void GetString( char s[] )
{
	gets(s);
}
void Shift( char s[] )
{
	int n,i=0,j=0,a[3];
	n=strlen(s); 
	for(i=0;i<3;i++)
	 {
	 	a[i]=s[i];
	 }
	 for(i=0;i<n;i++)
	 {
	 	if(i<n-3)
	 	 {
	 	 	s[i]=s[i+3];		 
		 }
		else 
		 {
		 	s[i]=a[j];
		 	j++;
		 } 
	 }
}

