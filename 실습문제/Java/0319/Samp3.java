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
      System.out.println("��ȭ");
   }
   
   void food() {
      System.out.println("�����ϴ� ������ �����Դϴ�");
   }
   
   void out() {
      System.out.println("�̸��� "+name);
      System.out.println("���̴� "+age);
   }

}

public class Samp3 {

   public static void main(String[] args) {
      Animal3 tt = new Animal3("ȣ����", 13);
      tt.out();
      tt.food();
      
      tt.insung3();
      

   }

}
