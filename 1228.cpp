#include <stdio.h>
struct book
{
char name[30];
float price;
};
int main(void)
{
int i,n,max,min;
scanf("%d",&n);
if(n<=10)
{
struct book books[n];
max=min=0;
for(i=0;i<n;i++)
{
scanf("%s %f",&books[i].name,&books[i].price);		
}
for(i=1;i<n;i++)
{  
if(books[max].price<books[i].price)
    max=i;
if(books[min].price>books[i].price)
min=i;
}
printf("������ߵ���������%s,�۸���%.2f\n",books[max].name,books[max].price);
printf("������ߵ���������%s,�۸���%.2f",books[min].name,books[min].price);	
}
return 0;
}
