#include<stdio.h>

void main(){//최대 공약수 구하는 프로그램
	int n1,n2;
	printf("숫자 입력: ");
	scanf("%d %d",&n1,&n2); 
	printf("%d",gongyak(n1,n2));
	
}

int gongyak(int a, int b){
	int i,max,result=0;
	if(a>b) max=a;//두 수 중 큰 수를 구함(반복문 횟수 결정을 위해) 
	else max=b;
	for(i=1;i<max;i++){//1~max까지 반복 
		if(a%i==0&&b%i==0){
			result=i;//더 큰 약수로 갱신 
		}
	}
	return result;
}
