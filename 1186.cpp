#include<stdio.h>
int main()
{
	int a[5][4]={80,70,89,60,90,80,63,65,78,86,90,81,90,80,63,65,72,83,95,86};
	int i=0,j=0;
	for(i=0;i<5;i++)
	 {
	 	 	 	printf("student%d���ܷ���%d\n",j+1,a[i][0]+a[i][1]+a[i][2]+a[i][3]);
	 	 	 	printf("student%d��ƽ������%.2lf\n",j+1,(a[i][0]+a[i][1]+a[i][2]+a[i][3])/4.0);
	 	 	 	j++;
	 }
	i=0;
	for(j=0;j<4;j++)
	 {
	 	 	printf("�γ�%d���ܷ���%d\n",i+1,a[0][j]+a[1][j]+a[2][j]+a[3][j]+a[4][j]);
	 	 	printf("�γ�%d���ܷ���%.2lf\n",i+1,(a[0][j]+a[1][j]+a[2][j]+a[3][j]+a[4][j])/5.0);
            i++;
	 } 
	return 0; 
}
