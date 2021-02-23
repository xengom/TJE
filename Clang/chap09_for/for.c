#include <stdio.h>
void main() {
    printf("======================================================\n");
    printf("이름\t국어\t영어\t수학\t총점\t평균\t학점\n");
    printf("======================================================\n");

    //선언부: 변수 선언 
    char nam[10], sc;
    int i, kor, eng, mat, tot;
    double avg;


    for (i = 0; i < 3; i++) // 배열은 0부터 치는게 좋다. 

    {

        printf("이름과 입력하시오.");
        scanf_s("%s", &nam);
        fflush(stdin);

        printf("국어 점수?");
        scanf_s("%d", &kor);

        printf("영어 점수?");
        scanf_s("%d", &eng);

        printf("수학 점수?");
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
