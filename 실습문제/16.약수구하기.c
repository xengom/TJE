#include<stdio.h>

void main(){//��� ���ϴ� ���α׷�
	int n,i,cnt=0;
	printf("���� �Է� : ");
	scanf("%d",&n);
	printf("��� ���\n");
	for(i=1;i<=n;i++){
		if(n%i==0) {
			printf("%d\t",i);
			cnt++;
		}
	}
	printf("\n�� ��� ���� : %d\n",cnt);	
	if(cnt==2) printf("%d�� �Ҽ�!",n);
}
