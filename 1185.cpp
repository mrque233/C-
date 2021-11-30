#include <stdio.h>

int main(void)

{

    int a[4][4];

    int sum=0,i=0,j=0; 
	
	for(i=0;i<4;i++)
    {
    	for(j=0;j<4;j++)
        {
          scanf("%d",&a[i][j]);  
		}    
           
	}                        

    for(i=0;i<4;i++)
    {
    	for(j=0;j<4;j++)
        {
           if(i==j||(i+j)==3) sum=a[i][j]+sum;  
		}    
           
	} 
        

    printf("sum=%d\n",sum);

    return 0;

} 
