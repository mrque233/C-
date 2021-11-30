#include<stdio.h>
int main()
{
int m,n;
scanf("%d %d",&m,&n);
int a[m][n],i,j,s=0;
for(i=0;i<m;i++)
    for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
int max=a[0][0];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if( max < a[i][j]) max = a[i][j];
        }
    }
printf("二维数组中的最大值是%d",max);
}
