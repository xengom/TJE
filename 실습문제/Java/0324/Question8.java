class Person{
	private int weight;//private�� get set �޼ҵ�θ� ����
	int age,height;
	String name;
	
	public Person(int weight, int age, int height, String name) {
		super();
		this.weight = weight;
		this.age = age;
		this.height = height;
		this.name = name;
	}
	public int getWeight() {
		return weight;
	}
	public void setWeight(int weight) {
		this.weight = weight;
	}
	
}

class Student extends Person{
	public Student(int weight,int age, int height, String name) {
		super(weight,age,height,name);
	}
	void out() {
		System.out.println("�̸� : "+name);
		
	}
}
public class Question8 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Student st = new Student(33,23,176,"ȫ�浿");
		st.out();
	}

}
