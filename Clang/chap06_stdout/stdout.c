#include <stdio.h>

#define TITLE "Cǥ�� ���̺귯���� ǥ�� ����Լ�"

void putchar_1();
void putchar_2();
void putchar_3();

void main() {
	//putchar_1();
	//putchar_2();
	putchar_3();
}

void putchar_1() {
	printf("%s\n", TITLE);
	putchar('a');
	putchar('b');
	putchar('1');
	putchar(65);
	putchar('A');
}

void putchar_2() {
	printf("\nputchar() ����Լ� ���� �׽�Ʈ\n");
	char rt = putchar(TITLE); //��Ʈ�� ��ºҰ�
	char ra = putchar('a');
	
	printf("\nrt(%c), ra(%c)\n", rt, ra);
}

void putchar_3() {
	putc('A', stdout);
	putc('\n', stdout);
	putc('B', stdout);
}