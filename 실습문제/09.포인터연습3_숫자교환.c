#include <stdio.h>
//�� ���� �Է��Ͽ� ���� �ٲپ� ���

void main(){
	int a=10,b=20;
	printf("��a = %d ��b = %d\n",a,b);
	
	callswap(a,b);	//&a,&b��� callswap�޴°͵� �����ͷ� �޾ƾ��� 
	printf("\n\n\n"); 
	callswap2(&a,&b);
		
	printf("��a = %d ��b = %d\n",a,b);
} 
//call by value, call by reference
//value�� ���� reference�� �ּҸ� �ѱ� 

void callswap(int x, int y){
	int temp;
	temp=x;
	x=y;
	y=temp;
	
	printf("��a = %d ��b = %d\n",x,y);
}

void callswap2(int *ap, int *bp){
	int temp;
	temp=*ap;
	*ap=*bp;
	*bp=temp;

}


