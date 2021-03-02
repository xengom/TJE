#include<stdio.h>

void main(){
	char bi[]={"aKOREAbc"};
	int i;
	int j=sizeof(bi);
	
	for(i=0;i<j-1;i++){
		if(bi[i]>='a'&&bi[i]<='z')
			bi[i]=bi[i]-32;
		else if(bi[i]>='A'&&bi[i]<='Z')
			bi[i]=bi[i]+32;
	}
	
	for(i=0;i<j-1;i++){
		printf("%d 번째 글자 = %c \n",i+1,bi[i]);
	}
}
