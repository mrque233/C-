#include<stdio.h>
#include<math.h>
int aaa(int n)
{
	return pow(n,2);
}
int main()
{
	int i=1,s=0;
	for(i=1;i<=10;i++)
	 {
	 	s=s+aaa(i);
	 }
	
	printf("1*1+2*2+...+10*10=%d",s);
	return 0; 
}
