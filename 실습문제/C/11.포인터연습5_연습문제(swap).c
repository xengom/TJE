//https://imgur.com/a/Hpg6oBY
#include <stdio.h>
void main(){
	int a=10,b=20,c=30;	
	printf("%d %d %d\n",a,b,c);
	//swap(&a,&b,&c);
	printf("%d %d %d\n",a,b,c);
	
	int *ap=&a;
	int *bp=&b;
	int *cp=&c;
	printf("%d %d %d\n",*ap,*bp,*cp);
	swap2(&ap,&bp,&cp);
	printf("%d %d %d\n",*ap,*bp,*cp);
}

int swap2(int **ap, int **bp, int **cp){//�ּҰ�(����������)�� �����ؼ� a,b,c���� �ٲ� 
	int temp;
	temp=*ap;
	*ap=*cp;
	*cp=*bp;
	*bp=temp;
}

int swap(int *ap, int *bp, int *cp){//�ּҰ��� �ּҰ�(����������)�� ������ a,b,c���� �״���̳� �� a,b,c�� �ּҰ��� ����� 
	int temp;
	temp=*ap;
	*ap=*cp;
	*cp=*bp;
	*bp=temp;
}



