#include <stdio.h>
#include <string.h>

//2개의 문자열을 입력받아 큰문자열에 작은 문자열 더해 출력 
//입력예) fffff,kkkk => kkkkfffff
//strcat concate

void main(){
	char str1[10]={"zzzzz"};
	char str2[10]={"xxxxx"};
	char hap[20];
	
	if(strcmp(str1,str2)>0)//str1>str2
	{
		strcat(hap,str1);
		strcat(hap,str2);
	}
	else
	{
		strcat(hap,str2);
		strcat(hap,str1);
	}
	puts(hap);
} 
 
