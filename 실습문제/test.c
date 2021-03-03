// 이름과 국어, 영어, 수학을 입력하여 개인별 총점과 평균, 학점, 석차 와 
// 과목별 총점과 평균 그리고 전체 평균을 구하는 프로그램 작성 
// 구조체 이용, 자료파일 입력 
#include <stdio.h>
#include <string.h>

typedef struct Person{
   char name[10];
   int kor, eng, mat, tot, rank;
   double avg;
   char hak;
}sung;

void swapcall(sung *a, sung *b);

void main()
{
   sung a[100];
   FILE * fp = fopen("score.txt", "r");
   if(fp == NULL) 
   printf("No File");
   int i =0;
   int kortot=0, engtot=0, mattot=0;
   
   while(EOF!=fscanf(fp, "%s %d %d %d",&a[i].name,&a[i].kor, &a[i].eng, &a[i].mat))
   {
      a[i].tot = a[i].kor + a[i].eng + a[i].mat;
      kortot += a[i].kor;
      engtot += a[i].eng;
      mattot += a[i].mat;
      
      a[i].avg = (double)a[i].tot/3; // 정수형-> 더블 .. 캐스팅 
      
      if(a[i].avg>=90) a[i].hak = 'A';   
      else if(a[i].avg>=80) a[i].hak = 'B';   
      else if(a[i].avg>=70) a[i].hak = 'C';   
      else if(a[i].avg>=60) a[i].hak = 'D';   
      else a[i].hak = 'F';   
      
      i++;
   }

   int inwon = i, j, r;
   for(i=0; i<inwon; i++)
   {
      r=1;
      for(j=0; j<inwon; j++)
      {
         if(a[i].tot < a[j].tot) r++;
      }
      a[i].rank = r;
   }   

   printf("이름\t국어\t영어\t수학\t총점\t평균\t학점\t석차\n");
   printf("====================================================================\n");
      
   for(i=0; i<inwon; i++)
   {
      printf("%6s\t%4d\t%4d\t%4d\t%4d\t%5.2f\t%4c\t%4d\n",a[i].name, a[i].kor, 
      a[i].eng, a[i].mat, a[i].tot, a[i].avg, a[i].hak, a[i].rank);
   }
   printf("====================================================================\n");
   printf("과목총점: %d\t%d\t%d\n", kortot, engtot, mattot);
   printf("과목평균: %5.2f\t%5.2f\t%5.2f\t\t%5.2f\n", (double)kortot/inwon, 
   (double)engtot/inwon, (double)mattot/inwon, 
   (double)(kortot+engtot+mattot)/(inwon*3));
   
   printf("====================================================================\n");
   printf("총점별 내림차순 정열\n");
   printf("이름\t국어\t영어\t수학\t총점\t평균\t학점\t석차\n");
   printf("====================================================================\n");
   
   for(i=0; i<inwon; i++)
   {
      for(j=0; j<inwon; j++)
      {
         if(a[i].tot > a[j].tot)
         {
            swapcall(&a[i], &a[j]);         
         }
      }
   }
   
   for(i=0; i<inwon; i++)
   {
      printf("%6s\t%4d\t%4d\t%4d\t%4d\t%5.2f\t%4c\t%4d\n",a[i].name, a[i].kor, 
      a[i].eng, a[i].mat, a[i].tot, a[i].avg, a[i].hak, a[i].rank);
   }
   

   
   printf("====================================================================\n");
   printf("이름별 내림차순 정열\n");
   printf("이름\t국어\t영어\t수학\t총점\t평균\t학점\t석차\n");
   printf("====================================================================\n");
   
      for(i=0; i<inwon; i++)
   {
      for(j=0; j<inwon; j++)
      {
         if(strcmp(a[i].name, a[j].name)>0)
         {
            swapcall(&a[i], &a[j]);         
         }
      }
   }
   
   for(i=0; i<inwon; i++)
   {
      printf("%6s\t%4d\t%4d\t%4d\t%4d\t%5.2f\t%4c\t%4d\n",a[i].name, a[i].kor, 
      a[i].eng, a[i].mat, a[i].tot, a[i].avg, a[i].hak, a[i].rank);
   }
   
}

void swapcall(sung *a, sung *b)
{
   sung temp;
   temp = *a;
   *a = *b;
   *b = temp;
}
