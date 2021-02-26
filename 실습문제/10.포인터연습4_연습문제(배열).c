//https://imgur.com/a/zqnb1Az

#include <stdio.h>

void main(){
	int arr[]={1,2,3,4,5};
	//q1(arr);
	printf("\n\n");
	q2(arr);
}

void q1(int *p){
	int i;
	for(i=0;i<5;i++){
		p[i]+=2; //*(p+i)+=2;
		printf("%5d",p[i]);
	}
}

void q2(int *p){
	int temp,i;
	for(i=0;i<2;i++){
		temp=p[i];
		p[i]=p[4-i];
		p[4-i]=temp;
	}
	for(i=0;i<5;i++){
		printf("%5d",p[i]);
	}
}
