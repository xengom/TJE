#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
	srand((int)time(NULL));
	int a;
	int yoot;
	while(1){
		yoot=rand()%5+1;
		switch(yoot){
			case 1:
				printf("��\t");
				printf("\n");
				break;
			case 2:
				printf("��\t");
				printf("\n");
				break;
			case 3:
				printf("��\t");
				printf("\n");
				break;
			case 4:
				printf("��\t");
				continue;
			case 5:	
				printf("��\t");
				continue;
		}
		printf("���⼭ �׸��ҷ�?(Y/N)\n");
		a=getch();
		if(a=='y'||a=='Y') break;
	}		
	
	return 0;
}
