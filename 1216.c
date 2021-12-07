#include <stdio.h>

int main()
{
	void number_off(int *p, int n);
	int num[100],*p=num,n,i;
	scanf("%d", &n);
	for(i=1;p<num+n;p++){  
		*p=i++;
	}
	number_off(num, n);
	for(p=num;p<num+n;p++){
		if(*p){
			printf("最后剩余者的编号是：%d",*p);
			break;
		}
	}
	return 0;
}

void number_off(int *p, int n)
{
	int *first=p, count=0, i=0, k=0, rest=n;
	while(rest!=1){  
		if(*(first+i)!=0){
			k++; 
			if(k==3){
				count++;  
				*(first+i) = 0;  
				k=0;
			}
		}
		i++;
		if(i==n){
			i=0;
		}
		rest = n-count;
	}
}
