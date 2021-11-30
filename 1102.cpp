#include <stdio.h>
int IsSquare(int n);
int main(){
    int n;
    scanf("%d", &n);
    if (IsSquare(n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}
int IsSquare(int n)
{
	int i=1,j,s=0;
	double b;
	for(i=1;i<n;i++)
	 {
	 	if(n==i*i)
	 	 {
	 	 	b=i;
		 }
	 }
	if(n==1)
	 {
	 	return 1;
	 } 
	for(i=0;i<=b;i++)
	 {
	 	s=i*i;
	 	if(s==n)
	 	{
	 		return 1;
		}
	 }
	 if(s!=n) return 0;
}
