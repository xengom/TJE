#include <stdio.h>
void main() {
    int a,i;
    printf("������ ���۴� ���� �Է��ϼ��� : ");
    scanf_s("%d", &a);
    printf("%d�� ���� 9�ܱ���\n", a);

    while (a < 10) {
        for (i = 1; i < 10; i++)
        {
            printf("%d * %d = %d\n", a, i, a * i);
        }
        a++;
    }
}
