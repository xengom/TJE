#include<stdio.h>

void main(){
	int n,i;
	printf("��� ũ�� �Է� : ");
	scanf("%d",&n);
	array(n);	
}

void array(int n){
	int arr[n][n];
	int i,j;//i:��,j:�� 
	int num=0,sw=1,c=-1;
	for (i=0;i<n;i++){
		for(j=0;j<n;j++){
			c=c+sw;
			num++;
			arr[i][c]=num;
		}
		c=c+sw;
		sw=sw*-1;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	
	
}
