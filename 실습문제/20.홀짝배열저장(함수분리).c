#include<stdio.h>
//���� 10�� �Է¹޾� Ȧ���� ó������ ����, ¦���� �ں��� ���� 
//ex. 1,2,3,4,5,6,7,8,9,10 => 1,3,5,7,9,10,8,6,4,2


int arr[10];
void main(){
	int i,n;
	
	puts("���� 10�� �Է�");
	for(i=0;i<10;i++){//�� �� 
		scanf("%d",&n);
		if(n%2==0){
			calljak(n);
		}
		else{
			callhol(n);
		}
	}

	for(i=0;i<10;i++){//�� �� 
		printf("%d\t",arr[i]); 
	}
}

void calljak(int n){
	static jak=0;
	arr[9-jak]=n;
	jak++;
}

void callhol(int n){
	static hol=0;
	arr[hol]=n;
	hol++;
}
