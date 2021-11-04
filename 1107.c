#include <stdio.h> 
int reverse(int number); 
int main()
{
    int n; 
    scanf("%d", &n);
    printf("%d\n", reverse(n)); 
    return 0;
} 

int reverse(int number){
	int f=0,sum=0;
	if(number<0){
		number=-number;
		f=1;
	}
	while(number!=0){
		sum=sum*10+number%10;
		number/=10; 
	}
	if(f==1)sum=-sum;
	return sum;
}
