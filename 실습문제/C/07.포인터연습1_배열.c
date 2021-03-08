#include <stdio.h>
//포인터 변수의 자료형은 기본 8바이트(32비트컴퓨터는 4바이트) 
void main(){
	int a[]={10,20,30,40,50,60,70,80,90,100};
	int result=callsum(a,sizeof(a)/sizeof(int));
	printf("합= %d",result);		
}

int callsum(int * ap,int size){//*ap대신에 b[]처럼 배열로 받아도 됨. 
	int sum=0,i;
	for(i=0;i<size;i++){
		sum+=ap[i];
	}
	return sum;
}

