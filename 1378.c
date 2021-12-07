#include<stdio.h>
#define  N  20
int main()
{
int a,n,c,k,i;
char str[N];
scanf("%d %d",&a,&n);
    k=0;
while (a){
c=a%n;
if (c>=10)
str[k++]=c+'A'-10;
else
str[k++]=c+'0';
a=a/n;
}
for (i=k-1;i>=0;i--)
printf("%c",str[i]);
return 0;
}
