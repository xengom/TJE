// �̸��� ����, ����, ������ �Է��Ͽ� ���κ� ������ ���, ����, ���� �� 
// ���� ������ ��� �׸��� ��ü ����� ���ϴ� ���α׷� �ۼ� 
// ����ü �̿�, �ڷ����� �Է� 
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
      
      a[i].avg = (double)a[i].tot/3; // ������-> ���� .. ĳ���� 
      
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

   printf("�̸�\t����\t����\t����\t����\t���\t����\t����\n");
   printf("====================================================================\n");
      
   for(i=0; i<inwon; i++)
   {
      printf("%6s\t%4d\t%4d\t%4d\t%4d\t%5.2f\t%4c\t%4d\n",a[i].name, a[i].kor, 
      a[i].eng, a[i].mat, a[i].tot, a[i].avg, a[i].hak, a[i].rank);
   }
   printf("====================================================================\n");
   printf("��������: %d\t%d\t%d\n", kortot, engtot, mattot);
   printf("�������: %5.2f\t%5.2f\t%5.2f\t\t%5.2f\n", (double)kortot/inwon, 
   (double)engtot/inwon, (double)mattot/inwon, 
   (double)(kortot+engtot+mattot)/(inwon*3));
   
   printf("====================================================================\n");
   printf("������ �������� ����\n");
   printf("�̸�\t����\t����\t����\t����\t���\t����\t����\n");
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
   printf("�̸��� �������� ����\n");
   printf("�̸�\t����\t����\t����\t����\t���\t����\t����\n");
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
