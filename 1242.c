#include<stdio.h>
struct book{
    char name[20];
    float sum; 
}a[10],b;
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s %f",a[i].name,&a[i].sum);
    }
    for(i=0;i<n-1;i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
        {
            if(a[k].sum<a[j].sum)
            {
                k=j;
            }
        }
        if(k!=i)
        {
            b=a[k];
            a[k]=a[i];
            a[i]=b;
        }
    }
    printf("定价最高的书名称是%s,价格是%.2f\n",a[0].name,a[0].sum);
    printf("定价最低的书名称是%s,价格是%.2f\n",a[n-1].name,a[n-1].sum);
     
    return 0;
}
