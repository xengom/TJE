#include <stdio.h>

int main(){
	int i,price,input[3], total, currency[4]={500,100,50,10},output[4]={0,};
	puts("���� ���� �Է�");
	scanf("%d",&price);
	puts("���� �־��ּ���");
	printf("1000�� �� ��: ");	
	scanf("%d",&input[0]);
	printf("500�� �� ��: ");
	scanf("%d",&input[1]);	
	printf("100�� �� ��: ");
	scanf("%d",&input[2]);
	
	total = input[0]*1000 + input[1]*500 + input[2]*100;
	if(price>total) puts("���� ���ڶ��");
	else{
		int change=total-price;
		printf("\n�Ѿ� : %d\n�Ž����� : %d",total,change);
		printf("\n\n");
		puts("�Ž��� ��");
		for(i=0;i<4;i++){
			output[i]=change/currency[i];
			change=change-(output[i]*currency[i]);
			printf("%d��:%d��",currency[i],output[i]);	
		}
		
	}
	
}
