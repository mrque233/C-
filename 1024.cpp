#include <stdio.h>
int main(void)
{
    int x,y;
    scanf("%d",&x);
    if(x<0) y=-1;
    if(x==0) y=0;
    if(x>0) y=1;
    printf("%d",y);
    return 0;
}
