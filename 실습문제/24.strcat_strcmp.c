#include <stdio.h>
#include <string.h>

//2���� ���ڿ��� �Է¹޾� ū���ڿ��� ���� ���ڿ� ���� ��� 
//�Է¿�) fffff,kkkk => kkkkfffff
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
 
