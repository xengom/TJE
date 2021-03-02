#include<stdio.h>
//정수 10개 입력받아 홀수면 처음부터 저장, 짝수면 뒤부터 저장 
//ex. 1,2,3,4,5,6,7,8,9,10 => 1,3,5,7,9,10,8,6,4,2
void main(){
	int i,n,cnt=0,arr[10];
	puts("정수 10개 입력");
	for(i=0;i<10;i++){//입 력 
		scanf("%d",&n);
		if(n%2==0){
			arr[9-cnt]=n;
			cnt++;
		}
		else{
			arr[cnt]=n;
		}
		
	}
	for(i=0;i<10;i++){//출 력 
		printf("%d\t",arr[i]); 
	}
}
