#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(){
	srand(time(NULL));
	int random = rand()%100;
	int n,cnt=0;
	while(random!=0){
		cnt++;
		printf("\n숫자를 입력 : ");
		scanf("%d",&n);
		if(n==random){
			printf("\n\n정답입니다.\n");
			printf("시도횟수 : %d",cnt);
			break;
		}
		else if(n>random) printf("더 작은 수 입력 : ");
		else printf("더 큰 수 입력: ");
	}
} 
 

