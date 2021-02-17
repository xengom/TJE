#include <stdio.h>

void print();
void printx(int x);
int sum(int p1, int p2);
int minus(int m1, int m2);

void main() {
	int a = sum(10,20);
	int b = minus(20,10);
	printx(a);
	printx(b);
}
	
void printx(int x){
	printf("printx : result(%d)\n", x);
}

int sum(int p1, int p2){
	int result_sum = p1 + p2;
	return result_sum;
}

int minus(int m1, int m2){
	int result_minus = m1 - m2;
	return result_minus;
}
