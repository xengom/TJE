#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//함수선언
void rand_num(int n);
void sort(int *snum, int size);

//메인함수
int main(void)
{
	int n = 1;

	printf("몇장의 로또를 구입하시겠습니까? : ");
	scanf_s("%d", &n);
	rand_num(n); //번호생성 출력 함수호출

	return 0;
}

//번호 생성/출력
void rand_num(int n)
{
	int i,j;
	int num[6];//랜덤 생성 로또번호
	int loto[6] = { 0 };//비교될 로또번호


	srand((unsigned)time(NULL));

	for (j = 0; j < n; j++) {


		for (i = 0; i <= 5; i++) {
			num[i] = 1 + (rand() % 45);//1~45 랜덤번호 생성
			if (num[i] != loto[0] && num[i] != loto[1] && num[i] != loto[2] && num[i] != loto[3] && num[i] != loto[4] && num[i] != loto[5])//같은 줄 로또번호에 같은숫자가 있는지 비교
			{
				loto[i] = num[i];//같은숫자가 없으면 대입
			}
			else
				i--;//같은 숫자 생성시 다시진행
		}

		sort(loto, 6);//정렬함수 호출


		printf("%2d>> ", j + 1);
		for (i = 0; i < 6; i++)
			printf("%2d ", loto[i]);
		printf("\n");
	}
		for (i = 0; i < 6; i++) {
			loto[i] = 0;

		}
		return;


}


//생성번호 오름차순 정렬 함수(버블정렬)
	void sort(int snum[], int size) {
		int i,j;
		int temp = 0;
		for (i = 0; i < size; i++) 
		{
			for (j = 0; j < size; j++) {
				if (snum[i] < snum[j]) {
					temp = snum[j];
					snum[j] = snum[i];
					snum[i] = temp;
				}
			}
		}
	}
