#include <stdio.h>
#include <windows.h>

int menu();
int info();
int input();
int student = 0;
int name[25], kor[25], eng[25], mat[25];

int main() {
	menu();
}

int info() {
	system("cls");
	if (student == 0) puts("�Էµ� ������ �����ϴ�.");
	menu();
}

int input() {
	system("cls");
	int i, stu;
	printf("�л� �� �Է�:");
	scanf_s("%d", &stu);
	if (stu != 0) {
		for (i = student; i < student + stu; i++); {
			printf("�̸� �� ���� �Է�(���ⱸ��)\n�̸�\t����\t����\t����\t");
			scanf_s("%d %d %d %d", &name[i], &kor[i], &eng[i], &mat[i]);
		}
		student += stu;
	}
	else if (stu == 0) puts("�л� �� 0!");
	menu();
}

int menu() {
	int num = 0;
	printf("���� �л� ���� %d�� �Դϴ�.(Default=1))\n", student);
	puts("�޴� ����(��ȣ)");
	puts("1. ���� ��ȸ");
	puts("2. ���� �Է�");
	puts("3. ����");
	scanf_s("%d", &num);
	switch (num) {
	case 1:
		info();
		break;
	case 2:
		input();
		break;
	case 3:
		puts("�����մϴ�.");
		break;
	}
}