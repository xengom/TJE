#include <stdio.h>
#include <string.h> 
//struct �ڷḦ �ϳ��� �������� 
//typedef �� struct �� �ٸ� �̸����� ���� 

typedef struct personal{
	char name[10];
	int age;
}korea; 
typedef struct personal2{
	char name[10];
	int kor,eng,mat,sum;
	double avg;
}score;
void main(){
	//korea1();
	score1();
}
void score1(){
	score a[3]={
		{"��浿",45,66,67},
		{"�̴���",77,88,99},
		{"�ۻ��",67,78,88}
	};
	int i;
	for(i=0;i<3;i++){
		a[i].sum = a[i].kor+a[i].eng+a[i].mat;
		a[i].avg=(double)a[i].sum/3.0;
	} 
	printf("�̸�    ����  ����  ����  ����  ��� 		\n");
	printf("====================================\n");
	for(i=0;i<3;i++){
		printf("%5s %5d %5d %5d %5d %5.2lf\n",a[i].name,a[i].kor,a[i].eng,a[i].mat,a[i].sum,a[i].avg);
	} 
}

void korea1(){
	korea k1={"�Ѷ��",33};
	printf("�̸� : %s\n",k1.name);//. <<��� ���� ������ 
	printf("���� : %d\n",k1.age);
	
	korea k2={"��浿",52};
	printf("�̸� : %s\n",k2.name);//. <<��� ���� ������ 
	printf("���� : %d\n",k2.age);
	
	//�±�ȯ
	 
	korea temp;
	temp = k1;
	k1 = k2;
	k2 = temp; 
	
	printf("�̸� : %s\n",k1.name);//. <<��� ���� ������ 
	printf("���� : %d\n",k1.age);
	printf("�̸� : %s\n",k2.name);//. <<��� ���� ������ 
	printf("���� : %d\n",k2.age);
	
	//�̸��� ����
	strcpy(k1.name,"��λ�");
	
	printf("�̸� : %s\n",k1.name);//. <<��� ���� ������ 
	printf("���� : %d\n",k1.age);
	printf("�̸� : %s\n",k2.name);//. <<��� ���� ������ 
	printf("���� : %d\n",k2.age);
	
	
	//����ü �迭
	korea a[3]={
		{"�̼���",44},
		{"�����",33},
		{"�ù߳�",55}};

	int i;
	for(i=0;i<3;i++){
		printf("%s\n",a[i].name);
		printf("%d\n",a[i].age);
	}	
		
	//������ ����ü
	korea *pp = &k1;
	printf("%s\n",pp->name);
	printf("%d\n",pp->age); 
}
