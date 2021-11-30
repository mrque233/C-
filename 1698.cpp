#include<stdio.h>
struct student
{ 
    int num;
    char name[10];
    int age;
    char sex;
    char major[30]; 
    float computer,english,math;
    float total;
};
int main()
{
	int i,m,n=0;
	scanf("%d",&m);
	struct student stu[m];
	for(i=0;i<3;i++)
	 {
	 	scanf("%d %s %d %c %s %f %f %f",&stu[i].num,&stu[i].name,&stu[i].age,
		      &stu[i].sex,&stu[i].major,&stu[i].computer,&stu[i].english,
			  &stu[i].math);
	 }
	for(i=0;i<3;i++)
	 {
	 	stu[i].total=stu[i].computer+stu[i].english+stu[i].math;
	 } 
	for(i=0;i<3;i++)
	 {
	 	if(stu[i].total>=stu[n].total) n=i;
	 } 
	printf("%d %s %d %c %s %.2f %.2f %.2f %.2f",stu[n].num,stu[n].name,stu[n].age,
		      stu[n].sex,stu[n].major,stu[n].computer,stu[n].english,
			  stu[n].math,stu[n].total);
	return 0;		  
}
