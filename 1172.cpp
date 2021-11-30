#include<stdio.h>
#include<string.h>
int main()
{
	char s[80];
	int n,j,i,count;
	gets(s); 
    for(i=0;s[i]!='\0';i++)
     {
     	n++;
	 }
	if(n<80)
	{
	 j=n-1;count=n;
     for(i=0;i<n;i++,j--)
      {
     	if(s[i]==s[j])
     	 {
     	 	count--;
		 }
	  }
	  if(count==0) printf("Yes");
	  else printf("No");
	} 

	return 0;   
}
