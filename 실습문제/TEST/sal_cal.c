#include <stdio.h>

int main(){
	int currency[10]={50000,10000,5000,1000,500,100,50,10,5,1};
	int ea[10]={0,};
	int sal,i; 
	printf("�޿��� �Է� : ");
	scanf("%d",&sal);
	for (i=0; i<10; i++){
		ea[i] = sal / currency[i];
		sal = sal % currency[i];
		printf("%d\t�� ¥��\t %d ��\n",currency[i],ea[i]);
	}
}
