//������ �迭 
#include <stdio.h>

//����Լ�
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

//�迭 ����, �迭ũ��n,  �����͹迭 
void makearr(int n, int(*arr)[n]) {
	int value = 1; // �迭�� ä�� ���� �� 
	int row = 0, col = -1; // ��(row), ��(col) �� ��Ÿ���� index 
	int inc = 1; // index �� �������� ��Ÿ��. 1 �Ǵ� -1 �� ���� �� ���� 
	int i, j;
	while (n > 0) {
		for (i = 0; i < n; i++) {
			col += inc; // �� index �� inc ��ŭ ������Ŵ. inc�� -1�̸� ���� 
			arr[row][col] = value;
			value++;
		}
		n--; // �����ϴ� �� 1 ���� 
		if (n == 0) break; // �����ϴ� ���� 0�� �Ǹ� while ���� �������� 
		for (i = 0; i < n; i++) {
			row += inc; // �� index �� inc ��ŭ ������Ŵ. inc �� -1�̸� ���� 
			arr[row][col] = value;
			value++;
		}
		inc *= -1; //inc ��ȣ�ٲ�. ������ ���ҷ� Ȥ�� ���Ұ� ������ �ٲ�� ȿ�� 
	}
}


int main() {
	int side;
	printf("�� ���� ���� �Է�:");
	scanf("%d", &side);
	int arr[side][side];
	makearr(side, arr);
	printarr(side, arr);
	return 0;
}