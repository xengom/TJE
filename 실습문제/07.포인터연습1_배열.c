#include <stdio.h>
//������ ������ �ڷ����� �⺻ 8����Ʈ(32��Ʈ��ǻ�ʹ� 4����Ʈ) 
void main(){
	int a[]={10,20,30,40,50,60,70,80,90,100};
	int result=callsum(a,sizeof(a)/sizeof(int));
	printf("��= %d",result);		
}

int callsum(int * ap,int size){//*ap��ſ� b[]ó�� �迭�� �޾Ƶ� ��. 
	int sum=0,i;
	for(i=0;i<size;i++){
		sum+=ap[i];
	}
	return sum;
}

