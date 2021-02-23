#include <stdio.h>
void main() {
    int a,i;
    printf("구구단 시작단 수를 입력하세요 : ");
    scanf_s("%d", &a);
    printf("%d단 부터 9단까지\n", a);

    while (a < 10) {
        for (i = 1; i < 10; i++)
        {
            printf("%d * %d = %d\n", a, i, a * i);
        }
        a++;
    }
}
