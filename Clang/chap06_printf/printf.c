#include <stdio.h>

#define TITLE "C언어 printf테스트"
void printTest1();

void main() {
	printf("%s\n", TITLE);
	printTest1();
}

void printTest1() {
	char ch = 'a';
	short st = 1234;
	int it = 1234567890;
	float fl = 0.123456f;
	double db = 0.123456789;
	printf("char(%c), short(%d), int(%d), float(%f), doubule(%.10f)\n", ch, st, it, fl, db);
}