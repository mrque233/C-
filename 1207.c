#include <stdio.h>

void swap(int *src, int len)

{

    int max,min,i;

    int maxindex=0,minindex=0;

    max=min=src[0];

    for(i=1;i<len;i++)

    {

        if(max<src[i])

        {

            max=src[i];

            maxindex=i;

        }

      else if(min>src[i])

        {

            min=src[i];

            minindex=i;

        }

    }

    printf("max=%d,min=%d\n",max,min);

    printf("maxindex=%d,minindex=%d\n",maxindex,minindex);

}

int main(void)

{

    int a[5],i;

    for(i=0;i<5;i++)

        scanf("%d",&a[i]);
        swap(a,i);

        return 0;

}
