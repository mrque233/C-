#include <stdio.h>
double fact(int n)
{
    if(n<0) return -1;
    else if(n==0 || n==1)                     /*$ERROR$*/
        return 1;
    else
      return n*fact(n-1);
}
int main(void)
{
    int n;
    double result;                              /*$ERROR$*/
    scanf("%d",&n);
    result=fact(n);
    if(result==-1)
        printf("Please input a number: ");
    else
        printf("The factorial of the number is %lf\n",result);
    return 0;
}
