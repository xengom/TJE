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
	{"김길동",1,1,67,42,43},
	{"이덕팔",2,1,99,62,34},
	{"최민식",2,2,67,42,53},
	{"박수찬",2,3,99,21,13},
	{"제갈수",3,1,67,73,83}
};

int sum[5];
float avg[5];


void main(){
	int i;
	printf("이름     반 번호 국어  영어  수학  총점  평균 		\n");
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
