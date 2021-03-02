#include<stdio.h>
//임의의 몇 개를 서브함수에 전달하여 서브함수에서 최대값을 구하여 반환받는 프로그램 작성
//배열로 전달받는 방식, 포인터로 받는 방식 둘다 작성 

void main(){
	int i,n;
	int arr[]={34,56,67,78,89,90,284,69,73,57,99,61,63,43};
	int max;
	max=callmax(arr,sizeof(arr)/sizeof(int));//arr배열 시작주소, 데이터 개수 
	printf("max = %5d\n\n",max);
	
	max=callmaxp(arr,sizeof(arr)/sizeof(int));//arr배열 시작주소, 데이터 개수 
	printf("max = %5d\n\n",max);
}

int callmax(int arr[],int k){//배열로 받기 
	int i=0,max=arr[i];
	for(i=0;i<k;i++){
		if(max<arr[i]) max=arr[i];
	}
	return max;
}

int callmaxp(int *p,int k){//포인터로 받기 
	int i=0,max=p[i];
	for(i=0;i<k;i++){
		if(max<p[i]) max=p[i];
	}
	return max;
}
