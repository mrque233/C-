#include <stdio.h>
#include <math.h>
int main(void)
{
    double x1,y1,x2,y2;
    double result;                      
    scanf("%lf%lf",&x1,&y1);
    scanf("%lf%lf",&x2,&y2);
    printf("%lf\n",result);
    return 0;
}
double dist(double x1,double y1,double x2,double y2)
{
    double result;
    result=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    return result;
}
