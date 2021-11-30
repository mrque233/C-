#include<stdio.h>
int main()
{
	int x,y,i=1;
	scanf("%d%d",&x,&y);
	if(x<=100&y<=100)
	{
		for(i=1;i<=y+1;i++)
	 {
	 	int a;
	 	scanf("%d",&a);
	 	if(a>x) printf("Too big\n");
	 	if(a<x&&a>=0) printf("Too small\n");
	 	if(a==x&&i==1) printf("Bingo!\n");break;
	 	if(a==0&&i<=3) printf("Lucky you!\n");break;
	 	if(a!=x&&i>5) printf("Game Over\n");
		if(a==x&&i>3&&i<=5) printf("Good Guess!\n");  
	}	
	 }
	return 0; 
}
