#include <stdio.h>

int main(){
	int i,price,input[3], total, currency[4]={500,100,50,10},output[4]={0,};
	puts("물건 값을 입력");
	scanf("%d",&price);
	puts("돈을 넣어주세요");
	printf("1000원 장 수: ");	
	scanf("%d",&input[0]);
	printf("500원 개 수: ");
	scanf("%d",&input[1]);	
	printf("100원 개 수: ");
	scanf("%d",&input[2]);
	
	total = input[0]*1000 + input[1]*500 + input[2]*100;
	if(price>total) puts("돈이 모자라다");
	else{
		int change=total-price;
		printf("\n총액 : %d\n거스름돈 : %d",total,change);
		printf("\n\n");
		puts("거스름 돈");
		for(i=0;i<4;i++){
			output[i]=change/currency[i];
			change=change-(output[i]*currency[i]);
			printf("%d원:%d개",currency[i],output[i]);	
		}
		
	}
	
}
