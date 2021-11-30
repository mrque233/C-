#include <stdio.h>
#define MAXS 15 
void StringCount( char s[] );
void ReadString( char s[] );
int main()
{
    char s[MAXS];
 
    ReadString(s);
    StringCount(s);
 
    return 0;
}
void ReadString( char s[] )
{
	int i=0,x=0;
	for(i=0;i<15;i++)
	 {
	 	scanf("%c",&s[i]);
	 	if(s[i]=='\n') break;
	 }
}
void StringCount( char s[] )
{
     int a=0,b=0,c=0,d=0; 
	  for(int i=0;s[i]!='\0'&&s[i]!='\n';i++)
	    {
	  	  if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
	  	   a++;
	  	  else if(s[i]==' '||s[i]=='\n')
		   b++;
		  else if(s[i]>='0'&&s[i]<='9')
		   c++;
		  else
		   d++;   
	    }	  	
	  printf("letter = %d, blank = %d, dight = %d, other = %d ",a,b,c,d);
}
