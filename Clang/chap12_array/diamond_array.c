/*//다이아몬드 출력

#include <stdio.h>

int main() {
	int a[7][7] = { 0, };
	int r = 0, c = 3, k = 1, i, j;//row, column
	while (k <= 25) {
		for (r = 0; r <= 6; r++) {

			if (r == 0 || r == 6) {
				c = 3;
				a[r][c] = k;
				k++;
			}
			else if (r == 1 || r == 5) {
				for (c = 2; c <= 4; c++) {
					a[r][c] = k;
					k++;
				}
			}
			else if (r == 2 || r == 4) {
				for (c = 1; c <= 5; c++) {
					a[r][c] = k;
					k++;
				}
			}
			else if (r == 3) {
				for (c = 0; c <= 6; c++) {
					a[r][c] = k;
					k++;
				}
			}
		}
	}


	//출력부
	for (i = 0; i <= 6; i++) {
		for (j = 0; j <= 6; j++) {
			printf("%5d", a[i][j]);
		}
		printf("\n");
		printf("\n");
	}
	return 0;
}
*/
