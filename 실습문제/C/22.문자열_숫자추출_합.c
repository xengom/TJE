#include<stdio.h>
#include<string.h>
//������ ���ڿ� ���ڸ� ��� �Է� �޾��� �� ���ڵ��� ���� ���ϴ� ���α׷�
//ex. a9b54m67m8 -> 9+5+4+6+7+8 

void main(){
char arr[]={0,};
	int result;
	scanf("%s",arr);
	printf("arrũ��:%d\n",strlen(arr));
	result=output(arr,strlen(arr));
	printf("%d",result);
}

int output(char arr[],int cnt){
	int i,sum=0;
	for(i=0;i<cnt;i++){
		if(arr[i]>=48&&arr[i]<=57) {
			sum+=(arr[i]-48);
		}
	}
	printf("\n");
	return sum;
}
