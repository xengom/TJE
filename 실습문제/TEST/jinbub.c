#include <stdio.h>
void main(){
	int a=16,jin,s,d;
	char kiho[4]={"",};
	printf("���� ����:");
	scanf("%d",&jin);
	printf("���� ����(����:0, ������:1):");
	scanf("%d",&s);
	printf("�Ÿ� ����:");
	scanf("%d",&d);
	
	printf("\n�̵���\n");
	if (jin == 8){
		printf("%o\n",a); 
	}
		
	else if (jin==16){
		printf("%x\n",a); 
	}
	
	printf("\n\n�̵� ��\n");
	if (jin == 8){
		if (s==0) a<<d;
		else if (s==1)a>>d;
		printf("%o\n",a); 
	}
	else if (jin == 16){
		if (s==0) a<<d;
		else if (s==1)a>>d;
		printf("%o\n",a); 
	}
	
}


