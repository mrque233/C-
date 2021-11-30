#include<stdio.h>
int main()
{
    void delchar(char *x,char y);//调用函数声明
    char s[80],c;
    printf("Input a string:");
    gets(s);
    printf("Input a char:");
    scanf("%c",&c);
    delchar(s,c);
    printf("After deleted,the string is:%s",s);
    return 0;
}
void delchar(char *x,char y)
{
    int i,j;
    for(i=0;x[i]!='\0';i++)
    {
    if(x[i]==y)
    {
        for(j=i;x[j+1]!='\0';j++)
            x[j]=x[j+1];
        x[j]='\0';
        i--;
    }
	}
}
