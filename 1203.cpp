#include <stdio.h>
int main(void)
{
    int *p1,*p2,*p3,*p,a,b,c;                     /*$ERROR$*/              
    p1=&a; p2=&b; p3=&c;                           /*$ERROR$*/
     scanf("%d,%d,%d",&a,&b,&c);
    if(*p1>*p2)
        { p=p1; p1=p2; p2=p; }
    if(*p1>*p3)
        { p=p1; p1=p3; p3=p; }
    if(*p2>*p3)
        { p=p2; p2=p3; p3=p; }                 /*$ERROR$*/
    printf("a=%d,b=%d,c=%d\n",a,b,c);
    printf("从小至大排序后的结果是:%d,%d,%d\n",*p1,*p2,*p3);
    return 0;
}
