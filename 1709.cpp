#include<stdio.h>
struct student
{
    int num;
    char name[10]; 
    int age;
    char sex;
    char major[30];
    float math,english,computer; 
};
int main()
{
	struct student stu[10];
	int n,i,max,min;
	scanf("%d",&n);
	max=min=0;
	for(i=0;i<n;i++)
	 {
	 	scanf("%d %s %d %c %s %f %f %f",&stu[i].num,&stu[i].name,&stu[i].age,&stu[i].sex,
		      &stu[i].major,&stu[i].math,&stu[i].english,&stu[i].computer);
	 }
	 for(i=1;i<n;i++)
	  {
	  	if((stu[i].math+stu[i].computer+stu[i].english)>(stu[max].math+stu[max].computer
		    +stu[max].english)) max=i;
	  	if((stu[i].math+stu[i].computer+stu[i].english)<(stu[min].math+stu[min].computer
		    +stu[min].english)) min=i;		    
	  }
	  printf("%d %s %d %c %s %.2f %.2f %.2f\n",stu[max].num,stu[max].name,stu[max].age,
	  stu[max].sex,stu[max].major,stu[max].math,stu[max].english,stu[max].computer);
	  printf("%d %s %d %c %s %.2f %.2f %.2f",stu[min].num,stu[min].name,stu[min].age,
	  stu[min].sex,stu[min].major,stu[min].math,stu[min].english,stu[min].computer);
	  return 0;	  
}
