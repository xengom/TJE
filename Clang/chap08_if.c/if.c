#include <stdio.h>
#include <stdbool.h>
#include <string.h>

//숙제 1 : 정수 3 개 입력해 최대/최솟값 구하는 프로그램
/*
void main(){
	int num[3];//배열생성(정수3개이므로 3)
	int max,min,i;//최대값, 최소값 저장용 변수, for문 용 변수
	printf("첫 번째 정수 입력: ");
	scanf("%d",&num[0]);
	max = num[0];// max, min값을 첫 정수로 초기화
	min = num[0];
	printf("두 번째 정수 입력: ");
	scanf("%d",&num[1]);
	printf("세  번째 정수 입력: ");
	scanf("%d",&num[2]);

	for(i=0; i<3; i++)//배열0~2까지 max,min값과 비교해서 새로 대입
	{
		if(num[i]>max){
			max = num[i];
		}
		if(num[i]<min){
			min = num[i];
		}
	}

	printf("최대값 : %d\n",max);
	printf("최소값 : %d\n",min);
}
*/

// 3항 연산자 사용 

/*
void main(){
	int num[3];//배열생성(정수3개이므로 3)
	int max,min,i;//최대값, 최소값 저장용 변수, for문 용 변수
	printf("첫 번째 정수 입력: ");
	scanf("%d",&num[0]);
	max = num[0];// max, min값을 첫 정수로 초기화
	min = num[0];
	printf("두 번째 정수 입력: ");
	scanf("%d",&num[1]);
	printf("세  번째 정수 입력: ");
	scanf("%d",&num[2]);

	max = (num[0]>num[1]) ? num[0]:num[1];
	max = (num[2]>max) ? num[2]:max;
	min = (num[0]<num[1]) ? num[0]:num[1];
	min = (num[2]<min) ? num[2]:min;

	printf("최대값 : %d\n",max);
	printf("최소값 : %d\n",min);
}
*/


