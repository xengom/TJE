#include <stdio.h>

int sum();

void main() {
	printf("1~100�հ�:%d", sum());
}

int sum() {
	int a = 0, i;
	for (i = 1; i < 101; i++) {
		a += i;
		printf("%d,%d\n", a, i);
	}
	return a;
}
