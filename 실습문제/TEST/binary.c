#include <stdio.h>
void decimal(int dec);
void main(){
	int n,s,d,bin[32]={0,};//number,side,distance
	printf("���� ���� �Է��Ͻÿ�: ");
	scanf("%d",&n);
	printf("���� �̵��� 0, ������ �̵��� 1�� �Է��Ͻÿ�: ");
	scanf("%d",&s);
	printf("�̵���ų �Ÿ�: ");
	scanf("%d",&d); 
	printf("�̵� ��:");
	decimal(n);
	switch (s){//choose distance
		case 0:
			n=n<<d;
			break;
		case 1:
			n=n>>d;
			break;
	}
	printf("\n�̵� ��:");
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

