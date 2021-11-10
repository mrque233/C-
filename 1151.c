#include<stdio.h>
#include<string.h>
int main(void) {
	char c,a[80];
	int i,aa=-1;
	scanf("%c",&c);
	scanf("%s",a);
	for(i=0; i<strlen(a); i++) {
		if(a[i]==c)aa=i;
	}
	if(aa==-1)printf("Not Found");
	else printf("index = %d",aa);
	return 0;
}
