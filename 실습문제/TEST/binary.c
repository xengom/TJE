#include <stdio.h>
void decimal(int dec);
void main(){
	int n,s,d,bin[32]={0,};//number,side,distance
	printf("정수 값을 입력하시오: ");
	scanf("%d",&n);
	printf("왼쪽 이동은 0, 오른쪽 이동은 1을 입력하시오: ");
	scanf("%d",&s);
	printf("이동시킬 거리: ");
	scanf("%d",&d); 
	printf("이동 전:");
	decimal(n);
	switch (s){//choose distance
		case 0:
			n=n<<d;
			break;
		case 1:
			n=n>>d;
			break;
	}
	printf("\n이동 후:");
	decimal(n);
}

void decimal(int dec){
	int bin[32]={0,};
	int pos=0,i;//binary position
	while(1){
		bin[pos]=dec%2;
		dec=dec/2;
		pos++;
		if (dec==0) break;
	}
	for(i=31;i>=0;i--){
		printf("%2d",bin[i]);
	}
}

