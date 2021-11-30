#include<stdio.h>
int main()
{
	char a[6]="China";
	char *pa;
	int i=0;
	pa=&a[i];
	for(i=0;i<5;i++)
	 {
	 	printf("%c",*pa);
	 	printf("\n");
	 	pa++;
	 }
	return 0; 
}
