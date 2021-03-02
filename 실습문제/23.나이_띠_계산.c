#include<stdio.h>
#include<string.h>
//임의의 문자와 숫자를 섞어서 입력 받았을 때 숫자들의 합을 구하는 프로그램
//ex. a9b54m67m8 -> 9+5+4+6+7+8 

void main(){
	char arr[]={"951230-3456789"};
	int year = 1900 + (arr[0]-48)*10 + (arr[1]-48);
	char ani[10];
	switch(year %12){
		case 0:
			strcpy(ani,"원숭이");
			break;
		case 1:
			strcpy(ani,"닭");
			break;
		case 2:
			strcpy(ani,"개");
			break;
		case 3:
			strcpy(ani,"돼지");
			break;
		case 4:
			strcpy(ani,"쥐");
			break;
		case 5:
			strcpy(ani,"소");
			break;
		case 6:
			strcpy(ani,"호랑이");
			break;
		case 7:
			strcpy(ani,"토끼");
			break;
		case 8:
			strcpy(ani,"용");
			break;
		case 9:
			strcpy(ani,"뱀");
			break;
		case 10:
			strcpy(ani,"말");
			break;
		case 11:
			strcpy(ani,"양");
			break;
		
	}
	
	printf("%d\n",year);
	printf("나이 : %d\n",2021-year+1);
	printf("띠 : %s",ani);
	
}


