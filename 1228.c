#include<stdio.h>
struct pay
{
	char name[30];
	float price;
}book[10];
int main()
{
	int num;
	scanf("%d\n",&num);
	int i;
	int max=0,min=0; 
	for(i=0;i<num;i++)
	 {
	 	gets(book[i].name);
	 	scanf("%f\n",&book[i].price);
	 }
	 for(i=0;i<num;i++)
     {  
         if(book[max].price<book[i].price)
         max=i;
         if(book[min].price>book[i].price)
         min=i;
     }
   	printf("%.2f, %s\n%.2f, %s",book[max].price,book[max].name,book[min].price,book[min].name);	
	return 0;
}
