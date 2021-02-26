#include <stdio.h>

int main(){
	int i,j;
	for(i=2;i<10;i+=3){
		printf("\n\n");
		for(j=1;j<=9;j++){
			printf("%d x %d = %d\t",i,j,i*j);
			printf("%d x %d = %d\t",i+1,j,(i+1)*j);
			if(i<8) printf("%d x %d = %d\n",i+2,j,(i+2)*j);
			else printf("\n");		
		}
	}
	return 0;
}

