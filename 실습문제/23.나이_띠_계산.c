#include<stdio.h>
#include<string.h>
//������ ���ڿ� ���ڸ� ��� �Է� �޾��� �� ���ڵ��� ���� ���ϴ� ���α׷�
//ex. a9b54m67m8 -> 9+5+4+6+7+8 

void main(){
	char arr[]={"951230-3456789"};
	int year = 1900 + (arr[0]-48)*10 + (arr[1]-48);
	char ani[10];
	switch(year %12){
		case 0:
			strcpy(ani,"������");
			break;
		case 1:
			strcpy(ani,"��");
			break;
		case 2:
			strcpy(ani,"��");
			break;
		case 3:
			strcpy(ani,"����");
			break;
		case 4:
			strcpy(ani,"��");
			break;
		case 5:
			strcpy(ani,"��");
			break;
		case 6:
			strcpy(ani,"ȣ����");
			break;
		case 7:
			strcpy(ani,"�䳢");
			break;
		case 8:
			strcpy(ani,"��");
			break;
		case 9:
			strcpy(ani,"��");
			break;
		case 10:
			strcpy(ani,"��");
			break;
		case 11:
			strcpy(ani,"��");
			break;
		
	}
	
	printf("%d\n",year);
	printf("���� : %d\n",2021-year+1);
	printf("�� : %s",ani);
	
}


