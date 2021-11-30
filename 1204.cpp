#include <stdio.h>
#define N 10
int main(void)
{
    int a[N],i,*p;
    p=a;                                          /*$ERROR$*/
    for(i=0;i<5;i++)
         scanf("%d",(p+i));                      /*$ERROR$*/
    for(i=0;i<5;i++)
         printf("%4d",*(p+i));                   /*$ERROR$*/
    return 0;
}
