#include <stdio.h>

int gop(int a, int b) {
	int gop = a * b;
	printf("����:%d", gop);
	return gop;
}

void main() {
	int a, b;
	printf("�� �Է�(���� ����)");
	scanf_s("%d %d", &a, &b);
	if (a == 0 || b == 0)
		printf("���� 0");
	else {
		gop(a, b);
	}
}