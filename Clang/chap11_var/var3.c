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
		printf("저금할 금액: ");
		scanf("%d", &input);
		if(input == -1) break;
		else{
			current += input;
			printf("현재까지의 입금액 : %d원\n", current);
		}
	}
}*/

void save(int money);
int main() {
	int input;
	while (1) {
		printf("저금할 금액: ");
		scanf("%d", &input);
		if (input == -1) {
			puts("입금종료");
			break;
		}
		else save(input);
	}
}
void save(int money) {
	static int current = 0;
	current += money;
	printf("현재까지의 입금액 : %d원 \n", current);
}
