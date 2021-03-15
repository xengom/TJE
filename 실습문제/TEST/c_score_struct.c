#include <stdio.h>
#include <string.h>

typedef struct stur{
	char name[10],gra;
	int kor,eng,mat,tot,rank;
	double avg;
}sco;
sco a[100];

void main(){
	puts("성적확인 시스템");
	FILE *fp = fopen("score.txt","r");
	if (fp == NULL) puts("File is missing");
	int i=0,x,y,rank;
	while (EOF!=fscanf(fp,"%s %d %d %d",&a[i].name,&a[i].kor,&a[i].eng,&a[i].mat)){
		//합계 
		a[i].tot=a[i].kor+a[i].eng+a[i].mat;
		
		//평균
		a[i].avg=(double)a[i].tot/3;
		
		//학점
		if(a[i].avg>=90) a[i].gra='A'; 
		else if(a[i].avg>=80) a[i].gra='B';
		else if(a[i].avg>=70) a[i].gra='C';
		else if(a[i].avg>=60) a[i].gra='D';
		else a[i].gra='F'; 
		
		i++;
	}
	for(x=0;x<i;x++){
		rank=1;
		for(y=0;y<i;y++){
			if(a[x].tot<a[y].tot) rank++;
		}
		a[x].rank=rank;
	}
	output1(i);
	printf("\n\n");
	output2(i);
	printf("\n\n");
	output3(i);
}

void output1(int inwon){//일반 출력 
    printf("이  름\t국어\t영어\t수학\t총점\t평균\t학점\t석차\n");
    printf("------------------------------------------------------------\n");
    int i;
   for(i=0;i<inwon;i++)
   {
      printf("%3s\t%4d\t%4d\t%4d\t%4d\t%5.2f\t%4c\t%4d\n",a[i].name,a[i].kor,a[i].eng,a[i].mat,a[i].tot,a[i].avg,a[i].gra,a[i].rank);   
   }
   printf("------------------------------------------------------------\n");
}

void output2(int inwon){//성적순 내림차순 
	int x,y;
	for(x=0;x<inwon;x++){
		for(y=0;y<inwon;y++){
			if(a[x].tot>a[y].tot) swapcall(&a[x],&a[y]);
		}
	}
    printf("이  름\t국어\t영어\t수학\t총점\t평균\t학점\t석차\n");
    printf("------------------------------------------------------------\n");
    int i;
   for(i=0;i<inwon;i++)
   {
      printf("%3s\t%4d\t%4d\t%4d\t%4d\t%5.2f\t%4c\t%4d\n",a[i].name,a[i].kor,a[i].eng,a[i].mat,a[i].tot,a[i].avg,a[i].gra,a[i].rank);   
   }
   printf("------------------------------------------------------------\n");
}

void output3(int inwon){//이름순 정렬 
	int x,y;
	for(x=0;x<inwon;x++){
		for(y=0;y<inwon;y++){
			if(strcmp(a[x].name,a[y].name)<0) swapcall(&a[x],&a[y]);
		}
	}
    printf("이  름\t국어\t영어\t수학\t총점\t평균\t학점\t석차\n");
    printf("------------------------------------------------------------\n");
    int i;
   for(i=0;i<inwon;i++)
   {
      printf("%3s\t%4d\t%4d\t%4d\t%4d\t%5.2f\t%4c\t%4d\n",a[i].name,a[i].kor,a[i].eng,a[i].mat,a[i].tot,a[i].avg,a[i].gra,a[i].rank);   
   }
   printf("------------------------------------------------------------\n");
}

void swapcall(sco *a ,sco *b){
	sco temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
