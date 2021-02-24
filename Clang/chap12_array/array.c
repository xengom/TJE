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
	if (student == 0) puts("입력된 정보가 없습니다.");
	menu();
}

int input() {
	system("cls");
	int i, stu;
	printf("학생 수 입력:");
	scanf_s("%d", &stu);
	if (stu != 0) {
		for (i = student; i < student + stu; i++); {
			printf("이름 및 점수 입력(띄어쓰기구분)\n이름\t국어\t영어\t수학\t");
			scanf_s("%d %d %d %d", &name[i], &kor[i], &eng[i], &mat[i]);
		}
		student += stu;
	}
	else if (stu == 0) puts("학생 수 0!");
	menu();
}

int menu() {
	int num = 0;
	printf("현재 학생 수는 %d명 입니다.(Default=1))\n", student);
	puts("메뉴 선택(번호)");
	puts("1. 정보 조회");
	puts("2. 정보 입력");
	puts("3. 종료");
	scanf_s("%d", &num);
	switch (num) {
	case 1:
		info();
		break;
	case 2:
		input();
		break;
	case 3:
		puts("종료합니다.");
		break;
	}
}