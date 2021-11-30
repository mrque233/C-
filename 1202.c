#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char a[n][80];
    int i,temp,max=0;
    for(i=0;i<n;i++)
    {
        scanf("%s",&a[i]);
        if(strlen(a[i])>max)
        {
            max=strlen(a[i]);
            temp=i;
        }
    }
    printf("The longest is: %s",a[temp]);
    return 0;
}
