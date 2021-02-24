#include <stdio.h>

int gop(int a, int b) {
	int gop = a * b;
	printf("곱은:%d", gop);
	return gop;
}

void main() {
	int a, b;
	printf("수 입력(띄어쓰기 구분)");
	scanf_s("%d %d", &a, &b);
	if (a == 0 || b == 0)
		printf("곱은 0");
	else {
		gop(a, b);
	}
}