#include<stdio.h>
//���� 10�� �Է¹޾� Ȧ���� ó������ ����, ¦���� �ں��� ���� 
//ex. 1,2,3,4,5,6,7,8,9,10 => 1,3,5,7,9,10,8,6,4,2
void main(){
	int i,n,cnt=0,arr[10];
	puts("���� 10�� �Է�");
	for(i=0;i<10;i++){//�� �� 
		scanf("%d",&n);
		if(n%2==0){
			arr[9-cnt]=n;
			cnt++;
		}
		else{
			arr[cnt]=n;
		}
		
	}
	for(i=0;i<10;i++){//�� �� 
		printf("%d\t",arr[i]); 
	}
}
