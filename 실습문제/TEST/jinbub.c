#include <stdio.h>
void main(){
	int a=16,jin,s,d;
	char kiho[4]={"",};
	printf("진법 선택:");
	scanf("%d",&jin);
	printf("방향 선택(왼쪽:0, 오른쪽:1):");
	scanf("%d",&s);
	printf("거리 선택:");
	scanf("%d",&d);
	
	printf("\n이동전\n");
	if (jin == 8){
		printf("%o\n",a); 
	}
		
	else if (jin==16){
		printf("%x\n",a); 
	}
	
	printf("\n\n이동 후\n");
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


