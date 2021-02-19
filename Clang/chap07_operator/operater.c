/*
* chap07-operator.c
* ������ ����
* ------------------------------------------------
* 1. ���Կ�����, ���������, ����������, ���迬����, ��������
* 2. �������� �켱������ �������
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
* ���Կ�����(=), ���ٴ� �ǹ̰� �ƴϴ�.
* a�� b�� ����(a -> b) : b = a
*
* 1. ������ �Ǵ� ����� ���� ���� �������.
* 2. ���� ��� ������ �ڷ����̾�� �Ѵ�.
*    - char & char
*    - short & short
*    - int & int
*    - float & float
*    - double & double
* 3. ���� ������ �ڷ������� ���� �ڷ����� ũ�Ⱑ �ٸ���� �������� �ս�?
*    - signed, unsigned
*    - float(e38), double(e308) : ��ȿ�ڸ�, ������ ũ��
*/
void assignInt()
{
	int a = 1; // signed(��ȣ�� �ִ� ����)
	int b = 2; // b�� �������� �������.
	b = a;
