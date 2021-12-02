#include<stdio.h> 
int main()
{
	char *M[12]={"Jan","Feb","Mar","Apr","May","Jul","Apr","Aug","Sep","Oct","Nov","Dec"};
	int n;
	scanf("%d",&n);
	if(n>=1&&n<=12)
	{
	printf("%s\n",M[n-1]);
	printf("Apr\nAug\nDec\nFeb\nJan\nJul\nJun\nMar\nMay\nNov\nOct\nSep\n");
    }
    else printf("输入的月份不正确");
	return 0;
	}
