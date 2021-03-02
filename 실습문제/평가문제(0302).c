#include <stdio.h>

typedef struct stud{
	char name[10];
	int ban;
	int no;
	int kor;
	int eng;
	int math;
}student;

int getTotal();
float getAverage();
student arr[5]={
	{"��浿",1,1,67,42,43},
	{"�̴���",2,1,99,62,34},
	{"�ֹν�",2,2,67,42,53},
	{"�ڼ���",2,3,99,21,13},
	{"������",3,1,67,73,83}
};

int sum[5];
float avg[5];


void main(){
	int i;
	printf("�̸�     �� ��ȣ ����  ����  ����  ����  ��� 		\n");
	printf("====================================================\n");
	getTotal();
	getAverage();
	for(i=0;i<5;i++){
		printf("%5s %3d %3d",arr[i].name,arr[i].ban,arr[i].no);
		printf("%5d %5d %5d  %5d   %5.2f\n",arr[i].kor,arr[i].eng,arr[i].math,sum[i],avg[i]);
	}

} 

int getTotal(){
	int i;
	for(i=0;i<5;i++){
		sum[i]=arr[i].kor+arr[i].eng+arr[i].math;	
	}
	return sum[i];
}
float getAverage(){
	int i;
	for(i=0;i<5;i++){
		sum[i]=arr[i].kor+arr[i].eng+arr[i].math;
		avg[i]=(float)sum[i]/3.0;
	}
	
	return avg[i];
}
