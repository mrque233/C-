#include<stdio.h>
int main()
{
	int s=0,i=1,count=0;
	while(i>count&&i<count+2)
      {
	 	int x;
	 	scanf("%d",&x);
	 	i++;
	 	if(x>0)
	 	{
	 		count++;
	 		if(x%2!=0)
	 		{
	 			s=s+x;
			}
		}
		else printf("%d\n",s);
	  }
    return 0; 
}
