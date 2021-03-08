#include <stdio.h>
//두 수를 입력하여 값을 바꾸어 출력

void main(){
	int a=10,b=20;
	printf("값a = %d 값b = %d\n",a,b);
	
	callswap(a,b);	//&a,&b라면 callswap받는것도 포인터로 받아야함 
	printf("\n\n\n"); 
	callswap2(&a,&b);
		
	printf("값a = %d 값b = %d\n",a,b);
} 
//call by value, call by reference
//value는 값만 reference는 주소를 넘김 

void callswap(int x, int y){
	int temp;
	temp=x;
	x=y;
	y=temp;
	
	printf("값a = %d 값b = %d\n",x,y);
}

void callswap2(int *ap, int *bp){
	int temp;
	temp=*ap;
	*ap=*bp;
	*bp=temp;

}


