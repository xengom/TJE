#include<stdio.h>
#include<string.h>
//임의의 문자와 숫자를 섞어서 입력 받았을 때 숫자들의 합을 구하는 프로그램
//ex. a9b54m67m8 -> 9+5+4+6+7+8 

void main(){
char arr[]={0,};
	int result;
	scanf("%s",arr);
	printf("arr크기:%d\n",strlen(arr));
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
