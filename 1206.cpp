#include <stdio.h>
void swap(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
    return ;
}
int main(void)
{
    int a=10,b=20;
    swap(&a,&b);
    printf("�������ֵΪ\n");
    printf("a=%d,b=%d\n",a,b);
    return 0;
}
