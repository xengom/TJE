//https://imgur.com/a/r3oqTZT

#include <stdio.h>
#include <string.h>

void  main(){
   char name[5][10]={{"Ã¶Èñ"},{"Ã¶¼ö"},{"¿µÈñ"},{"¿µ¼ö"},{"    "}};
   int i,j;
   int jum[5][5]={
   					{8,9,6,5,0},
   					{6,8,12,9,0},
   					{8,5,6,9,0},
   					{8,10,7,10,0},
   					{0,0,0,0,0}
					};
for(i=0;i<4;i++){
	for(j=0;j<4;j++){
		jum[i][4]=jum[i][4]+jum[i][j];
		jum[4][j]=jum[4][j]+jum[i][j];
	}
}
for(i=0;i<4;i++){
	jum[4][4]=jum[4][4]+jum[i][4];
}
	jum[4][4]=jum[4][4]/4;

//Ãâ·Â 
printf("=====================================================\n");
printf("ÀÌ¸§\t ±¹¾î\t¿µ¾î\t¼öÇÐ\tµµ´ö\tÇÐ»ý ÃÑÁ¡\n");
printf("=====================================================\n");

for(i=0;i<5;i++){
   printf("%3s",name[i]);
   for(j=0;j<5;j++){
      printf("%8d",jum[i][j]);
   }
   printf("\n");
}
}

