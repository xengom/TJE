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
	
	int arr2[4][3]={0,};
	int cnt;//줄바뀌는 숫자 개수 겸 행 번호 
	int cnt2=1;//옆으로 미는 숫자 개수 
	for(cnt=3;cnt>=0;cnt--){
		if(cnt!=0){
			for(i=0;i<cnt;i++){
				arr2[cnt][i]=arr[cnt-1][i+4-cnt];
			}
			if(cnt2<3){
				for(j=0;j<cnt2;j++){
					arr2[cnt-1][j+3-cnt2]=arr[cnt-1][j];
				}
			}
			cnt2++;
		}
		else{
			for(k=0;k<3;k++){
				arr2[cnt][k]=arr[cnt][k];
			}
		}
	}
		
	

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


