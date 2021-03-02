#include <stdio.h>
typedef struct personal2{
	char name[10];
	int kor,eng,mat,sum;
	double avg;
}score;

void main(){
	score a[1000];
	FILE *fp =fopen("score.txt","r");
	int i,j=0;
	while(EOF!=fscanf(fp,"%s %d %d %d",&a[j].name,&a[j].kor,&a[j].eng,&a[j].mat)){
		j++;
	}
	printf("자료개수%d\n",j);
	for(i=0;i<j;i++){
		
	a[i].sum = a[i].kor+a[i].eng+a[i].mat;
	a[i].avg=(double)a[i].sum/3.0;
	}
	
	printf("이름    국어  영어  수학  총점  평균 		\n");
	printf("====================================\n");
	for(i=0;i<j;i++){
		printf("%5s %5d %5d %5d %5d %5.2lf\n",a[i].name,a[i].kor,a[i].eng,a[i].mat,a[i].sum,a[i].avg);
	} 
	
}
