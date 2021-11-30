#include<stdio.h>
int main()
{
	int i=1,letter=0,blank=0,digit=0,other=0;
	for(i=1;i<=10;i++)
	 {
	 	char c;
	 	scanf("%c",&c);
	    if(c==32) blank++;
     	else if(c>=48&&c<=57) digit++;
    	else if((c>=65&&c<=90)||(c>=97&&c<=122)) letter++;
    	else other++;
	 }
	printf("letter=%d,blank=%d,digit=%d,other=%d\n",letter,blank,digit,other);
	return 0; 
}
