#include <stdio.h>
#include <string.h> 
//struct 자료를 하나의 묶음으로 
//typedef 로 struct 를 다른 이름으로 선언 

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
		{"김길동",45,66,67},
		{"이덕팔",77,88,99},
		{"송상덕",67,78,88}
	};
	int i;
	for(i=0;i<3;i++){
		a[i].sum = a[i].kor+a[i].eng+a[i].mat;
		a[i].avg=(double)a[i].sum/3.0;
	} 
	printf("이름    국어  영어  수학  총점  평균 		\n");
	printf("====================================\n");
	for(i=0;i<3;i++){
		printf("%5s %5d %5d %5d %5d %5.2lf\n",a[i].name,a[i].kor,a[i].eng,a[i].mat,a[i].sum,a[i].avg);
	} 
}

void korea1(){
	korea k1={"한라산",33};
	printf("이름 : %s\n",k1.name);//. <<멤버 접근 연산자 
	printf("나이 : %d\n",k1.age);
	
	korea k2={"김길동",52};
	printf("이름 : %s\n",k2.name);//. <<멤버 접근 연산자 
	printf("나이 : %d\n",k2.age);
	
	//맞교환
	 
	korea temp;
	temp = k1;
	k1 = k2;
	k2 = temp; 
	
	printf("이름 : %s\n",k1.name);//. <<멤버 접근 연산자 
	printf("나이 : %d\n",k1.age);
	printf("이름 : %s\n",k2.name);//. <<멤버 접근 연산자 
	printf("나이 : %d\n",k2.age);
	
	//이름만 변경
	strcpy(k1.name,"백두산");
	
	printf("이름 : %s\n",k1.name);//. <<멤버 접근 연산자 
	printf("나이 : %d\n",k1.age);
	printf("이름 : %s\n",k2.name);//. <<멤버 접근 연산자 
	printf("나이 : %d\n",k2.age);
	
	
	//구조체 배열
	korea a[3]={
		{"이순신",44},
		{"김덕팔",33},
		{"시발놈",55}};

	int i;
	for(i=0;i<3;i++){
		printf("%s\n",a[i].name);
		printf("%d\n",a[i].age);
	}	
		
	//포인터 구조체
	korea *pp = &k1;
	printf("%s\n",pp->name);
	printf("%d\n",pp->age); 
}
