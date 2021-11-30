#include <stdio.h>
int main(void)
{
    int i,j,a[5][5];
    for(i=0;i<5;i++)
        for(j=0;j<5;j++)
        {
        	a[i][j]=i+j;
		}
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        printf("%2d",a[i][j]);
        if(j==5) printf("\n");
    }   
    return 0;
}
