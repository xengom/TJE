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
	   System.out.println("착하고 똑똑한?");
   }
   void out() {
	  insung();
      System.out.println("이름   : "+name);
      System.out.println("전화   : "+tel);
      System.out.println("부서명 : "+buseo);
      System.out.println("급여   : "+pay);      
   }   
   
}
public class Samp {
   public static void main(String[] args) {
      Company co = new Company("홍길동","010-1234-2345","영업부",434343);
      co.out();
   }
}