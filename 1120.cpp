#include <stdio.h>
int getmax(int x,int y)                                /*$ERROR$*/
{
    if(x>y) return x;
    else return y;
}
int main(void)
{
    int m,n;
    scanf("%d,%d",&m,&n);
    printf("%d\n",getmax(m,n));            /*$ERROR$*/
    return 0;
}
