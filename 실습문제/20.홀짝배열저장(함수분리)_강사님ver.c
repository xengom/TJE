#include <stdio.h>
#include <string.h>
# define pr printf
 int a[10];
 void  callinput();
 void  calleven(int aa);
 void  callodd(int aa);
 void  callout();
 
void main()
   {
   callinput();
   callout();
   }
void  callinput()
{

   int i,su,na;
   int * ap=a;
   for(i=0;i<10;i++)
   {
      pr("수를 입력?");
      scanf("%d",&su);
      na = su % 2 ;
      if(na==0) //짝 수  
      { 
      calleven(su);         
      }         
      else //홀 수  
      {
      callodd(su);
      }         
   }   
}
void    calleven(int aa)
   {   
      static int p2=0; // 입력한 수의 짝수의  수 뒤에서 부터.. 
            a[9-p2]=aa;
            p2++;
   }
void    callodd(int aa)
   {  
      static   int p1=0 ; // 입력한 수의 홀수 의   수 앞에서ㅜ부터  
            a[p1]=aa;
            p1++;
   }
void callout()
   {
      int i;
      for(i=0;i<10;i++)
      {
            pr("%5d",a[i]);
         }
      pr("\n");
   }
