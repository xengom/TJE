#include <stdio.h>
#include <stdbool.h>
#include <string.h>

//���� 1 : ���� 3 �� �Է��� �ִ�/�ּڰ� ���ϴ� ���α׷�
/*
void main(){
	int num[3];//�迭����(����3���̹Ƿ� 3)
	int max,min,i;//�ִ밪, �ּҰ� ����� ����, for�� �� ����
	printf("ù ��° ���� �Է�: ");
	scanf("%d",&num[0]);
	max = num[0];// max, min���� ù ������ �ʱ�ȭ
	min = num[0];
	printf("�� ��° ���� �Է�: ");
	scanf("%d",&num[1]);
	printf("��  ��° ���� �Է�: ");
	scanf("%d",&num[2]);

	for(i=0; i<3; i++)//�迭0~2���� max,min���� ���ؼ� ���� ����
	{
		if(num[i]>max){
			max = num[i];
		}
		if(num[i]<min){
			min = num[i];
		}
	}

	printf("�ִ밪 : %d\n",max);
	printf("�ּҰ� : %d\n",min);
}
*/

// 3�� ������ ��� 

/*
void main(){
	int num[3];//�迭����(����3���̹Ƿ� 3)
	int max,min,i;//�ִ밪, �ּҰ� ����� ����, for�� �� ����
	printf("ù ��° ���� �Է�: ");
	scanf("%d",&num[0]);
	max = num[0];// max, min���� ù ������ �ʱ�ȭ
	min = num[0];
	printf("�� ��° ���� �Է�: ");
	scanf("%d",&num[1]);
	printf("��  ��° ���� �Է�: ");
	scanf("%d",&num[2]);

	max = (num[0]>num[1]) ? num[0]:num[1];
	max = (num[2]>max) ? num[2]:max;
	min = (num[0]<num[1]) ? num[0]:num[1];
	min = (num[2]<min) ? num[2]:min;

	printf("�ִ밪 : %d\n",max);
	printf("�ּҰ� : %d\n",min);
}
*/


