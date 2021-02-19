/*
* chap07-operator.c
* 연산자 예제
* ------------------------------------------------
* 1. 대입연산자, 산술연산자, 증감연산자, 관계연산자, 논리연산자
* 2. 연산자의 우선순위와 연산방향
*/

#include <stdio.h>

#define MAX_CHAR    127
#define MAX_SHORT   32767
#define MAX_INT     2147483647
#define MAX_UCHAR   0xff        // 256
#define MAX_USHORT  0xffff      // 65535
#define MAX_UINT    0xffffffff  // 4294967295

void assignInt();
void assignUInt();
void assignFloatDouble();
void assignCasting();
void assignCastingReal();

void main()
{
	//assignInt();
	//assignUInt();
	//assignFloatDouble();
	assignCasting();
	assignCastingReal();
}

/*
* 대입연산자(=), 같다는 의미가 아니다.
* a를 b에 대입(a -> b) : b = a
*
* 1. 대입이 되는 대상의 원래 값은 사라진다.
* 2. 양쪽 모두 동일한 자료형이어야 한다.
*    - char & char
*    - short & short
*    - int & int
*    - float & float
*    - double & double
* 3. 같은 형태의 자료형에서 서로 자료형의 크기가 다른경우 데이터의 손실?
*    - signed, unsigned
*    - float(e38), double(e308) : 유효자리, 지수의 크기
*/
void assignInt()
{
	int a = 1; // signed(부호가 있는 정수)
	int b = 2; // b의 원래값은 사라진다.
	b = a;
