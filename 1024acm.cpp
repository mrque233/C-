#include<stdio.h>
int main()
{
	int a,b,c,d,C;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a<b&&a<c&&a<d)
	 {C=b+c+d;
	  if(b+c>d&&c+d>b&&d+b>c){ printf("Yes %d\n",C);
	 
	  } else printf("No\n");
	 
	 }
	
	if(a>b&&c>b&&d>b)
	 {C=a+c+d;
	  if(a+c>d&&a+d>c&&c+d>a){ printf("Yes %d\n",C);
	 
	  } else printf("No\n");
	 
	 }
	 
	if(a>b&&c>b&&d>b)
     {C=a+b+d;
	  if(a+b>d&&a+d>b&&b+d>a){ printf("Yes %d\n",C);
	  
	  }else printf("No\n");
	 
	 }
	
    if(a>b&&c>b&&d>b)
     {C=a+c+b;
	  if(a+c>b&&a+b>c&&c+b>a){  printf("Yes %d\n",C);
	 
	  } else printf("No\n");
	 
	 }
	return 0;
}
