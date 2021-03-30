abstract class Animal{
	String name;
	int age;
	public Animal(String name, int age) {
		super();
		this.name=name;
		this.age=age;
	}
	
	 abstract void eat();//추상메소드, = 반드시 필요하다 라는 거임
}

class Tiger extends Animal{
	public Tiger(String name, int age) {
		super(name,age);
	}

	@Override//재정의, 오버라이딩
	void eat() {
		// TODO Auto-generated method stub
		System.out.println("고기 좋아");
	}
	
}





public class Inheritage {

	public static void main(String[] args) {


	}

}
