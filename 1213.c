#include<stdio.h>
int main()
{
    char a[80];
	int i;
    scanf("%s", a);
    for (i = 0; a[i] != '\0'; i++)
    {
        if ('a' <= a[i] &&a[i]<= 'z')
            printf("%c", a[i] - 32);
        else
        printf("%c", a[i]);
    }
    return 0;
}
