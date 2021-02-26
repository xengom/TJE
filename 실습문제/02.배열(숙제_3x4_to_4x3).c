#include <stdio.h>

int three_four(){
	int arr[3][4];
	int i,j,k=1;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			arr[i][j]=k;
			printf("%5d",arr[i][j]);
			if(j==3) printf("\n");
			k++;
		}
	}
}

int change(){
	int arr[3][4];
	int i,j,k=1;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			arr[i][j]=k;
			k++;
		}
	}
	
	int arr2[4][3];
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			arr2[i][j]=arr[j][i];
			printf("%5d",arr2[i][j]);
			if(j==2) printf("\n");
		}
	}

	
}

int change2(){
	int arr[3][4];
	int i,j,k=1;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			arr[i][j]=k;
			k++;
		}
	}
	
	int arr2[4][3];
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			
			
				
			printf("%5d",arr2[i][j]);
			if(j==2) printf("\n");
		}
	}

	
}

int main(){
	three_four();
	printf("\n");
	change();
	printf("\n");
	change2();
	
}


