//달팽이 배열 
#include <stdio.h>

//출력함수
void printarr(int n, int(*arr)[n]) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%5d", arr[i][j]);
		}
		printf("\n");
		printf("\n");
	}
}

//배열 생성, 배열크기n,  포인터배열 
void makearr(int n, int(*arr)[n]) {
	int value = 1; // 배열을 채워 나갈 값 
	int row = 0, col = -1; // 행(row), 열(col) 을 나타내는 index 
	int inc = 1; // index 의 증감량을 나타냄. 1 또는 -1 을 가질 수 있음 
	int i, j;
	while (n > 0) {
		for (i = 0; i < n; i++) {
			col += inc; // 열 index 를 inc 만큼 증가시킴. inc가 -1이면 감소 
			arr[row][col] = value;
			value++;
		}
		n--; // 전진하는 양 1 감소 
		if (n == 0) break; // 전진하는 양이 0이 되면 while 루프 빠져나옴 
		for (i = 0; i < n; i++) {
			row += inc; // 행 index 를 inc 만큼 증가시킴. inc 가 -1이면 감소 
			arr[row][col] = value;
			value++;
		}
		inc *= -1; //inc 부호바꿈. 증가가 감소로 혹은 감소가 증가로 바뀌는 효과 
	}
}


int main() {
	int side;
	printf("한 변의 길이 입력:");
	scanf("%d", &side);
	int arr[side][side];
	makearr(side, arr);
	printarr(side, arr);
	return 0;
}