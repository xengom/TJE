#include <stdio.h>
void main() {
    printf("======================================================\n");
    printf("�̸�\t����\t����\t����\t����\t���\t����\n");
    printf("======================================================\n");

    //�����: ���� ���� 
    char nam[10], sc;
    int i, kor, eng, mat, tot;
    double avg;


    for (i = 0; i < 3; i++) // �迭�� 0���� ġ�°� ����. 

    {

        printf("�̸��� �Է��Ͻÿ�.");
        scanf_s("%s", &nam);
        fflush(stdin);

        printf("���� ����?");
        scanf_s("%d", &kor);

        printf("���� ����?");
        scanf_s("%d", &eng);

        printf("���� ����?");
        scanf_s("%d", &mat);

        tot = kor + eng + mat;
        //   avg= tot/3.0
        avg = (double)tot / 3;


        //   if(avg>=90)   strcpy(sc,"A") ;
        //   else if(avg>=80) strcpy(sc,"B") ;
        //   else if(avg>=70) strcpy(sc,"C") ;
        //   else if(avg>=60) strcpy(sc,"D");
        //   else strcpy(sc,"F");


        if (avg >= 90)
            sc = 'A';
        else if (avg >= 80)
            sc = 'B';
        else if (avg >= 70)
            sc = 'C';
        else if (avg >= 60)
            sc = 'D';
        else
            sc = 'F';


        printf("%s\t %d\t %d\t %d\t %d\t %4.2f\t %c\n", nam, kor, eng, mat, tot, avg, sc);
        //   %s    %d    %d    %d    %d    %4.2f    %s\n
    }
}
