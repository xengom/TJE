#include<stdio.h>

void main(){//약수 구하는 프로그램
	int n,i,cnt=0;
	printf("숫자 입력 : ");
	scanf("%d",&n);
	printf("약수 목록\n");
	for(i=1;i<=n;i++){
		if(n%i==0) {
			printf("%d\t",i);
			cnt++;
		}
	}
	printf("\n총 약수 개수 : %d\n",cnt);	
	if(cnt==2) printf("%d는 소수!",n);
}
