#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char str[5][20],str1[20];
    for(i=0;i<5;i++)
        scanf("%s",str[i]);
    for(i=0;i<4;i++)
        for(j=i+1;j<5;j++)
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(str1,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],str1);
            }
    for(i=0;i<5;i++)
        printf("%s\n",str[i]);
    return 0;
}
