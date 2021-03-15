#include <stdio.h>

void main()
{
   char name[100][10];
   int korea[100];
   int english[100];
   int mathmetic[100];
   int total[100];
   double average[100];
   char hakjum[100];
   int i=0;
   FILE * filepoint = fopen("c:/C언어/3-9.txt","r");
   if( filepoint == NULL )
   printf("화일이 없음!!");
   
   
   while(EOF!=fscanf(filepoint,"%s %d %d %d",&name[i],&korea[i],&english[i],&mathmetic[i]))
   {
      total[i]= korea[i]+english[i]+mathmetic[i];
      average[i]=(double )total[i] / 3;
      if(average[i]>=90)
         hakjum[i]='A';
      else if(average[i]>=80)
         hakjum[i]='B';    
      else if(average[i]>=70)
         hakjum[i]='C';
      else if(average[i]>=60)
         hakjum[i]='D';
      else
         hakjum[i]='F';   
      i++;                  
   }
   
   int inwon=i;
   printf("이름 국어 영어 수학 총점 평균 학점\n");
   printf("-----------------------------------\n"); 
   for(i=0;i<inwon;i++)
   {
      printf("%s %d %d %d %d %.1f %c\n",name[i],korea[i],english[i],mathmetic[i],total[i],average[i],hakjum[i]);
   }
   
}
