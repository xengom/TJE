#include <stdio.h>

void test() {
	static int data = 0;
	printf("data = %d", data++);
	return data;
}

void main() {
	int i;
	for (i = 0; i < 5; i++) {
		test();
	}
}