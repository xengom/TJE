abstract class Personal{
   String name,tel;
   public Personal(String name, String tel) {
      this.name = name;
      this.tel = tel;
   }
   abstract void insung();
}

class Company extends Personal{ 
   String buseo;
   int pay;
   public Company(String name, String tel, String buseo, int pay) {
      super(name, tel);
      this.buseo = buseo;
      this.pay = pay;
   }   
   @Override
   void insung() {
	   System.out.println("���ϰ� �ȶ���?");
   }
   void out() {
	  insung();
      System.out.println("�̸�   : "+name);
      System.out.println("��ȭ   : "+tel);
      System.out.println("�μ��� : "+buseo);
      System.out.println("�޿�   : "+pay);      
   }   
   
}
public class Samp {
   public static void main(String[] args) {
      Company co = new Company("ȫ�浿","010-1234-2345","������",434343);
      co.out();
   }
}