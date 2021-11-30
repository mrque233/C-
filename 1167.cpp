#include <stdio.h>
int main(void)
{
    int i,j,index,temp;
    int a[5];
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);                 
    for(i=0;i<4;i++)
    {  
        index=i;
        for(j=i+1;j<5;j++)                  
         if(a[j]<a[index])  index=j;   
        temp=a[index];
        a[index]=a[i];
        a[i]=temp;
    }
    for(i=0;i<5;i++)
        printf("%6d",a[i]);
    return 0;
}
