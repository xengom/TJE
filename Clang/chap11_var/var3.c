#include <stdio.h>
/*
void save();

int main() {
	save();
}

void save() {
	static int input = 0;
	int current=0;
	while(1){
		printf("������ �ݾ�: ");
		scanf("%d", &input);
		if(input == -1) break;
		else{
			current += input;
			printf("��������� �Աݾ� : %d��\n", current);
		}
	}
}*/

void save(int money);
int main() {
	int input;
	while (1) {
		printf("������ �ݾ�: ");
		scanf("%d", &input);
		if (input == -1) {
			puts("�Ա�����");
			break;
		}
		else save(input);
	}
}
void save(int money) {
	static int current = 0;
	current += money;
	printf("��������� �Աݾ� : %d�� \n", current);
}
