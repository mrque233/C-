#include <stdio.h> 

struct address

{

char street[20];

int code;

int zip;

};

struct contact

{

char name[10];

int age;

char telephone[13];


struct address addr;

}ct;

int main(void)

{	

int i,count;

count =0;

for(i=0;i<3;i++ )

{ 

scanf("%s%d%s",ct.name,&ct.age,ct.telephone); 

scanf("%s%d%d",&ct.addr.street,&ct.addr.code,&ct.addr.zip); //输入地址信息

if(ct.age>=40)   count++ ;

}

printf("40岁以上人数：%d",count);

return 0;

}
