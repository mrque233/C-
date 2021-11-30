#include <stdio.h>

struct student

{  int num;              //Ñ§ºÅ

   char name[12];         //ÐÕÃû

   int score;            //³É¼¨

};

int main(void)

{

student stud[6].={ {1001,"Pan Dong",48},             /*$ERROR$*/

                          {1002,"Zhao Hua",62},

                          {1003,"Hu Litai",93},

                          {1004,"Zhang Li",85},

                          {1005,"Liu Ming",58},

                          {1006,"Xin Peng",37}};

int i,n=0;

printf("num\tname\t\tscore\n");

i=0;

while(i<6)

{

if(stud[i].score>=60)                                       /*$ERROR$*/

{

printf("%d\t%s\t%d\n",stud[i].num,stud[i].name,stud[i].score);

     n++;                                              /*$ERROR$*/

}

   i++;

  }

printf("n=%d\n",n);

return 0;

}
