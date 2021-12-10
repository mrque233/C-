#include<stdio.h>
struct book{
	char name[100];
	double price;
}books[10];
int main(){
	int n,i,min,max;	
	scanf("%d",&n);
	for(i=0;i<n;i++){   
	    scanf("\n");
	    gets(books[i].name);
		scanf("%lf",&books[i].price);	
	}
	min=max=0;
	for(i=0;i<n;i++){	
		if(books[max].price<books[i].price)
		max=i;
		if(books[min].price>books[i].price)
		min=i;
	}
	printf("%.2f, %s\n",books[max].price,books[max].name);	
	printf("%.2f, %s",books[min].price,books[min].name);
	return 0;
}
