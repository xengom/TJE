#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//�Լ�����
void rand_num(int n);
void sort(int *snum, int size);

//�����Լ�
int main(void)
{
	int n = 1;

	printf("������ �ζǸ� �����Ͻðڽ��ϱ�? : ");
	scanf_s("%d", &n);
	rand_num(n); //��ȣ���� ��� �Լ�ȣ��

	return 0;
}

//��ȣ ����/���
void rand_num(int n)
{
	int i,j;
	int num[6];//���� ���� �ζǹ�ȣ
	int loto[6] = { 0 };//�񱳵� �ζǹ�ȣ


	srand((unsigned)time(NULL));

	for (j = 0; j < n; j++) {


		for (i = 0; i <= 5; i++) {
			num[i] = 1 + (rand() % 45);//1~45 ������ȣ ����
			if (num[i] != loto[0] && num[i] != loto[1] && num[i] != loto[2] && num[i] != loto[3] && num[i] != loto[4] && num[i] != loto[5])//���� �� �ζǹ�ȣ�� �������ڰ� �ִ��� ��
			{
				loto[i] = num[i];//�������ڰ� ������ ����
			}
			else
				i--;//���� ���� ������ �ٽ�����
		}

		sort(loto, 6);//�����Լ� ȣ��


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


//������ȣ �������� ���� �Լ�(��������)
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
