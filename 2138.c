#include<stdio.h>
int main()
{
int m,n;
scanf("%d %d",&m,&n);
int a[m][n],i,j,s=0;
for(i=0;i<m;i++)
    for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
for(i=0;i<m;i++)
    for(j=0;j<n;j++)
        s+=a[i][j];

printf("%d",s);
}
