import java.util.*;
class  KoExcept extends Exception{//����� ����ó�� Ŭ���� ����
   public KoExcept(String message) { 
      super(message);
   }
}
public class User_Exception {//���� ��� �޵� Ȧ���� ���� 

   public static void main(String[] args) throws Exception {
     Scanner sc = new Scanner(System.in);
     int i =0,sum=0; 
     while(i<5) {
     System.out.print("Ȧ���� �Է��ض�!");
        try {
        int n = sc.nextInt();
        if (n%2 == 0 ) {throw new KoExcept("¦���� �ȵſ�!");}
        else {System.out.println("Ȧ��: "+n); i++; sum += n;}  
        }catch(KoExcept e) {
           System.out.println(e.getMessage());
           continue;
        }catch(Exception e) {
           System.out.println(e.getMessage());
           continue;
        }
     }
     System.out.println("��: " +sum);
   }
}