/*
전처리기 예제
*/

#include <stdio.h>
#define PI 3.141592

#define POWA(x) (x*x)
#define CIRCLE_AREA(r) (PI * POWA(r))
#define CIRCLE_ROUND(r) (PI * 2 * r)

float circle_area(float r1);
float circle_round(float r2);

void main() {
	float a;
	printf("input r as float:");
	scanf_s("%f", &a);
	printf("when r is %f, circle's area is %f\n", a, circle_area(a));
	printf("when r is %f, circle's round is %f\n", a, circle_round(a));
	printf("when r is %f, circle's area is %f\n", a, CIRCLE_AREA(a));
	printf("when r is %f, circle's round is %f\n", a, CIRCLE_ROUND(a));
}

float circle_area(float r1) {
	return PI * POWA(r1);
}

float circle_round(float r2) {
	return 2 * PI * r2;
}