#include <stdio.h>
int main(void) {
	int x=1,y=1; 
	while(y>0){
		if(x%6==1&&x%7==2&&x%8==3&&x%9==4){
			printf("%d",x);
			y=0;
		}else{
			x++;
		}
	}
	return 0;
}
