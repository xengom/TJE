#include <stdio.h>

void callswap(int **p1,int **p2);//�����Լ����� 
void main()
{
	char name1[10]={"Testname1"};
	char name2[]={"Testname2"};
	char *name3="Testname2";
	printf("�̸� = %s\n",name1);
	name1[0]='D';
	printf("�̸� = %s\n",name1);
	
	printf("�̸� = %s\n",name2);
	name2[0]='F';
	printf("�̸� = %s\n",name2);
	
	printf("�̸� = %s\n",name3);
	name3='E';//�� �ȵȴ� 
	printf("�̸� = %s\n",name3);
}
