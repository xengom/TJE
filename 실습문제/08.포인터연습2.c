#include <stdio.h>

void main(){
	int a = 10;
	int *ap=&a;
	int *bp=ap;
	
	printf("%d %d\n\n",ap,bp);
	
	(*bp)++;//a=11
	printf("%d\n\n",a);
	
	printf("%d %d\n",*ap,*bp);
	
	printf("%d\n",(*ap)++);//11����� a=12 
	printf("%d\n",(*bp)++);//12����� a=13 
	printf("%d\n",a);//a=13
} 
