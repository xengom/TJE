#include<stdio.h>
//������ �� ���� �����Լ��� �����Ͽ� �����Լ����� �ִ밪�� ���Ͽ� ��ȯ�޴� ���α׷� �ۼ�
//�迭�� ���޹޴� ���, �����ͷ� �޴� ��� �Ѵ� �ۼ� 

void main(){
	int i,n;
	int arr[]={34,56,67,78,89,90,284,69,73,57,99,61,63,43};
	int max;
	max=callmax(arr,sizeof(arr)/sizeof(int));//arr�迭 �����ּ�, ������ ���� 
	printf("max = %5d\n\n",max);
	
	max=callmaxp(arr,sizeof(arr)/sizeof(int));//arr�迭 �����ּ�, ������ ���� 
	printf("max = %5d\n\n",max);
}

int callmax(int arr[],int k){//�迭�� �ޱ� 
	int i=0,max=arr[i];
	for(i=0;i<k;i++){
		if(max<arr[i]) max=arr[i];
	}
	return max;
}

int callmaxp(int *p,int k){//�����ͷ� �ޱ� 
	int i=0,max=p[i];
	for(i=0;i<k;i++){
		if(max<p[i]) max=p[i];
	}
	return max;
}
