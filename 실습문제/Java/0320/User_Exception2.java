import java.util.*;

class  KoExcept extends Exception{//����� ����ó�� Ŭ���� ����
   public KoExcept(String message) { 
      super(message);
   }
}

public class User_Exception2 {//���� ��� �޵� Ȧ���� ���� 

   public static void main(String[] args) throws Exception {
     Scanner sc = new Scanner(System.in);
     
     try {
    	 System.out.print("�̸� �Է�");
    	 String name=sc.next();
    	 System.out.print("���� �Է�");
    	 int kor = sc.nextInt();
    	 System.out.print("���� �Է�");
    	 int eng = sc.nextInt();
    	 System.out.print("���� �Է�");
    	 int mat = sc.nextInt();
    	 if(kor>100||eng>100||mat>100) {
    		 throw new KoExcept("�ʹ� ũ�� ������");
    	 }
    	 else {
    		 System.out.print("�̸� : "+name+"\n���� : "+kor+"\n���� : "+eng+"\n���� : "+mat+"\n���� : "+(kor+eng+mat));
    	 }
    	 
    	 
     }
     catch(KoExcept e){
    	 System.out.println("��, �ʹ�Ŀ");
     }
    	 
     }
}
