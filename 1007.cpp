#include <stdio.h>
int main(void)
{
    char ch1,ch2;
    ch1=getchar();                  
    ch2=getchar();
    putchar(ch1-32);           
    putchar(ch2-32);            
    return 0;
}
