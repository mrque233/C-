#include <stdio.h>
#include <string.h>
int main(void)
{ 
char ch[30]="This is a test of point";
char *p;
p=ch;                                    /*$ERROR$*/
while(*p!='\0')                           /*$ERROR$*/
putchar(*(p++));                            /*$ERROR$*/
return 0;
}
