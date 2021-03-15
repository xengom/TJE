#include <stdio.h>
#include <string.h>

typedef struct stur{
	char name[10],gra;
	int kor,eng,mat,tot;
	double avg;
}sco;
sco a[100];

void main(){
	puts("����Ȯ�� �ý���");
	FILE *fp = fopen("score.txt","r");
	if (fp == NULL) puts("File is missing");
	int i=0;
	while (EOF!=fscanf(fp,"%s %d %d %d",&a[i].name,&a[i].kor,&a[i].eng,&a[i].mat)){
		//�հ� 
		a[i].tot=a[i].kor+a[i].eng+a[i].mat;
		
		//���
		a[i].avg=(double)a[i].tot/3;
		
		//����
		if(a[i].avg>=90) a[i].gra='A'; 
		else if(a[i].avg>=80) a[i].gra='B';
		else if(a[i].avg>=70) a[i].gra='C';
		else if(a[i].avg>=60) a[i].gra='D';
		else a[i].gra='F'; 
		
		i++;
	}
	output1(i);
}

void output1(int inwon){
    printf("��  ��\t����\t����\t����\t����\t���\t����\n");
    printf("------------------------------------------------------\n");
	int i;
	for(i=0;i<inwon;i++){
    	printf("%3s\t%4d\t%4d\t%4d\t%4d\t%5.2f\t%4c\n",a[i].name,a[i].kor,a[i].eng,a[i].mat,a[i].tot,a[i].avg,a[i].gra);   
	}
}


