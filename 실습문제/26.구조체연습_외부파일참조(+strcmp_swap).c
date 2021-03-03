#include <stdio.h>
typedef struct stru{
	char name[10];
	int kor,eng,mat,sum,rank;
	double avg;
	char hak;
}score;
void swapcall(score *a, score *b);
void main(){
	score a[100];
	FILE *fp =fopen("score.txt","r");
	int i,j=0,k,rank;
	int ktot,etot,mtot;
	while(EOF!=fscanf(fp,"%s %d %d %d",&a[j].name,&a[j].kor,&a[j].eng,&a[j].mat)){
		ktot+=a[j].kor;
		etot+=a[j].eng;
		mtot+=a[j].mat;
		j++;
	}
	printf("자료개수%d\n\n",j);
	for(i=0;i<j;i++){
		a[i].sum = a[i].kor+a[i].eng+a[i].mat;
		a[i].avg=(double)a[i].sum/3.0;
		if(a[i].avg>=90) a[i].hak='A';
		else if(a[i].avg>=80) a[i].hak='B';
		else if(a[i].avg>=70) a[i].hak='C';
		else if(a[i].avg>=60) a[i].hak='D';
		else a[i].hak='F';
	}
	for(i=0;i<j;i++){//기준 
		rank=1;
		for(k=0;k<j;k++){//비교 
			if(a[i].sum<a[k].sum) rank++;//기준점수가 비교점수보다 작으면 석차 1증가 
		}
		a[i].rank=rank;
	}
	
	printf("이름    국어  영어  수학  총점  평균  성적  석차	\n");
	printf("===========================================================\n");
	for(i=0;i<j;i++){
		printf("%5s %5d %5d %5d %5d %6.2lf %3c %5d\n",a[i].name,a[i].kor,a[i].eng,a[i].mat,a[i].sum,a[i].avg,a[i].hak,a[i].rank);
	} 
	printf("===========================================================\n");
	printf("전체tot %5d %5d %5d\n",ktot,etot,mtot);
	printf("전체avg %5.2lf %5.2lf %5.2lf\t%5.2lf\n",ktot/(double)j,etot/(double)j,mtot/(double)j,(ktot+etot+mtot)/(double)(j*3));
	printf("\n\n\n석차 내림차순 정렬\n");
	
	for(i=0;i<j;i++){
		for(k=0;k<j;k++){
			if(a[i].rank<a[k].rank){
				swapcall(&a[i],&a[k]);
			}
		}
	}
	 
	printf("이름    국어  영어  수학  총점  평균  성적  석차	\n");
	printf("===========================================================\n");
	for(i=0;i<j;i++){
		printf("%5s %5d %5d %5d %5d %6.2lf %3c %5d\n",a[i].name,a[i].kor,a[i].eng,a[i].mat,a[i].sum,a[i].avg,a[i].hak,a[i].rank);
	} 
	printf("===========================================================\n");
	printf("전체tot %5d %5d %5d\n",ktot,etot,mtot);
	printf("전체avg %5.2lf %5.2lf %5.2lf\t%5.2lf\n",ktot/(double)j,etot/(double)j,mtot/(double)j,(ktot+etot+mtot)/(double)(j*3));
	printf("\n\n\n이름 내림차순 정렬\n");
	
	for(i=0;i<j;i++){
		for(k=0;k<j;k++){
			if(strcmp(a[i].name,a[k].name)>0){
				swapcall(&a[i],&a[k]);
			}
		}
	}
	 
	printf("이름    국어  영어  수학  총점  평균  성적  석차	\n");
	printf("===========================================================\n");
	for(i=0;i<j;i++){
		printf("%5s %5d %5d %5d %5d %6.2lf %3c %5d\n",a[i].name,a[i].kor,a[i].eng,a[i].mat,a[i].sum,a[i].avg,a[i].hak,a[i].rank);
	} 
	printf("===========================================================\n");
	printf("전체tot %5d %5d %5d\n",ktot,etot,mtot);
	printf("전체avg %5.2lf %5.2lf %5.2lf\t%5.2lf\n",ktot/(double)j,etot/(double)j,mtot/(double)j,(ktot+etot+mtot)/(double)(j*3));
}

void swapcall(score *a,score *b){
	score temp;
	temp = *b;
	*b = *a;
	*a = temp;
}

