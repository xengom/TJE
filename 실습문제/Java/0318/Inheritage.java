abstract class Animal{
	String name;
	int age;
	public Animal(String name, int age) {
		super();
		this.name=name;
		this.age=age;
	}
	
	 abstract void eat();//�߻�޼ҵ�, = �ݵ�� �ʿ��ϴ� ��� ����
}

class Tiger extends Animal{
	public Tiger(String name, int age) {
		super(name,age);
	}

	@Override//������, �������̵�
	void eat() {
		// TODO Auto-generated method stub
		System.out.println("��� ����");
	}
	
}





public class Inheritage {

	public static void main(String[] args) {


	}

}
