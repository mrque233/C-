#include <stdio.h>

#include <string.h>

int main(void)

{

  char a[6]="ABCDE",temp;

  int i,k;

  for(i=1;i<=5;i++)

   {

      printf("%c",&a[i]);             /*$ERROR$*/

      temp=a[1];

      for(k=0;k<4;k++)

      {

           a[k+1]=a[k+2];             /*$ERROR$*/

      }

      a[4]=temp;                    /*$ERROR$*/

   }

return 0;

}
