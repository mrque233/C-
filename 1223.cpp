#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *month[12]={"January","Februar","March","April","May","June","July","Auguest","September","October","November","December"};
	int n;
	printf("�������·ݺţ�\n");
	scanf("%d",&n);
	if(n>=1&&n<=12)
	 {
	 	printf("%d �µ�Ӣ���� %s.\n",n,*(month+n-1));
	 }
	else
	    printf("û�� %d ��.\n",n);
	return 0;	 
}

