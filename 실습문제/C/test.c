#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(){
	srand(time(NULL));
	int random = rand()%100;
	int n,cnt=0;
	while(random!=0){
		cnt++;
		printf("\n���ڸ� �Է� : ");
		scanf("%d",&n);
		if(n==random){
			printf("\n\n�����Դϴ�.\n");
			printf("�õ�Ƚ�� : %d",cnt);
			break;
		}
		else if(n>random) printf("�� ���� �� �Է� : ");
		else printf("�� ū �� �Է�: ");
	}
} 
 

