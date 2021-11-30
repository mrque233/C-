#include<stdio.h>
struct book
{
	char name[10];
	float price;
};
int main()
{
	int n,i,p=0,q=0;
	scanf("%d",&n);
	struct book b[n];
	for(i=0;i<n;i++)
	 {
	 	scanf("%s %f",&b[i].name,&b[i].price);
	 }
	for(i=0;i<n;i++)
	 {
	 	if(b[p].price<=b[i].price) p=i;
	 } 
	for(i=0;i<n;i++)
	 {
	 	if(b[q].price>=b[i].price) q=i;
	 } 
	printf("定价最高的书名称是%s,价格是%.2f\n",b[p].name,b[p].price);
	printf("定价最低的书名称是%s,价格是%.2f",b[q].name,b[q].price);
	return 0; 
}
