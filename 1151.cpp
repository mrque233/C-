#include<stdio.h>
int main()
{
	char c,s[81];
	int index=0,count=0;
	scanf("%c",&c);
	for(int i=0;i<2;i++)
	 {
	 	gets(s);
	 }
	for(int i=0;s[i]!='\0';i++)
	 {
	 	if(s[i]==c)
	 	 {
	 	 	index=i;
	 	 	index=(index>i)?index:i;
	 	 	count++;
		 }
	 }
	 if(count!=0)
	  {
	 	printf("index = %d",index);
	  } 
	 if(count==0)
	  {
	 	printf("Not Found");
	  } 
	return 0; 
}
