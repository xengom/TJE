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
      pr("���� �Է�?");
      scanf("%d",&su);
      na = su % 2 ;
      if(na==0) //¦ ��  
      { 
      calleven(su);         
      }         
      else //Ȧ ��  
      {
      callodd(su);
      }         
   }   
}
void    calleven(int aa)
   {   
      static int p2=0; // �Է��� ���� ¦����  �� �ڿ��� ����.. 
            a[9-p2]=aa;
            p2++;
   }
void    callodd(int aa)
   {  
      static   int p1=0 ; // �Է��� ���� Ȧ�� ��   �� �տ����̺���  
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
