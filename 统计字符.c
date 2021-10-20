#include<stdio.h>
#include<string.h>
#define hello 10
int main(void) {
	char y[hello] ;
	int letter=0,num=0,other=0;
	gets(y);
	for(int i=0; i<strlen(y); i++) {
		char x=y[i];
		if(x>=97&&x<=122)letter++;
		else if(48<=x&&x<=57)num++;
		else other++;
	}
	printf("小写字母%d个,数字%d个,其他字符%d个",letter,num,other);
	return 0;
}
