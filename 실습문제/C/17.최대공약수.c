#include<stdio.h>

void main(){//�ִ� ����� ���ϴ� ���α׷�
	int n1,n2;
	printf("���� �Է�: ");
	scanf("%d %d",&n1,&n2); 
	printf("%d",gongyak(n1,n2));
	
}

int gongyak(int a, int b){
	int i,max,result=0;
	if(a>b) max=a;//�� �� �� ū ���� ����(�ݺ��� Ƚ�� ������ ����) 
	else max=b;
	for(i=1;i<max;i++){//1~max���� �ݺ� 
		if(a%i==0&&b%i==0){
			result=i;//�� ū ����� ���� 
		}
	}
	return result;
}
