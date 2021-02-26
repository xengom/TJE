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
				printf("도\t");
				printf("\n");
				break;
			case 2:
				printf("개\t");
				printf("\n");
				break;
			case 3:
				printf("걸\t");
				printf("\n");
				break;
			case 4:
				printf("윷\t");
				continue;
			case 5:	
				printf("모\t");
				continue;
		}
		printf("여기서 그만할래?(Y/N)\n");
		a=getch();
		if(a=='y'||a=='Y') break;
	}		
	
	return 0;
}
