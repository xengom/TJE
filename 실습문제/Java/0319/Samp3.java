class Person3{
   String name;
   int age;
   public Person3(String name, int age) {
      super();
      this.name = name;
      this.age = age;
   }
}

interface Ins3{
   void insung3();
}

class Animal3 extends Person3 implements Ins3{
   public Animal3(String name, int age) {
      super(name, age);
      
   }

   @Override
   public void insung3() {
      System.out.println("온화");
   }
   
   void food() {
      System.out.println("좋아하는 음식은 피자입니다");
   }
   
   void out() {
      System.out.println("이름은 "+name);
      System.out.println("나이는 "+age);
   }

}

public class Samp3 {

   public static void main(String[] args) {
      Animal3 tt = new Animal3("호랑이", 13);
      tt.out();
      tt.food();
      
      tt.insung3();
      

   }

}
