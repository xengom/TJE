#include <stdio.h>

void callswap(int **p1,int **p2);//원형함수선언 
void main()
{
	char name1[10]={"Testname1"};
	char name2[]={"Testname2"};
	char *name3="Testname2";
	printf("이름 = %s\n",name1);
	name1[0]='D';
	printf("이름 = %s\n",name1);
	
	printf("이름 = %s\n",name2);
	name2[0]='F';
	printf("이름 = %s\n",name2);
	
	printf("이름 = %s\n",name3);
	name3='E';//얜 안된다 
	printf("이름 = %s\n",name3);
}
