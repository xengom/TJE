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

int swap2(int **ap, int **bp, int **cp){//주소값(단일포인터)만 변경해서 a,b,c값이 바뀜 
	int temp;
	temp=*ap;
	*ap=*cp;
	*cp=*bp;
	*bp=temp;
}

int swap(int *ap, int *bp, int *cp){//주소값의 주소값(이중포인터)를 변경해 a,b,c값은 그대로이나 각 a,b,c의 주소값이 변경됨 
	int temp;
	temp=*ap;
	*ap=*cp;
	*cp=*bp;
	*bp=temp;
}



