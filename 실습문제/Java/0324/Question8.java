class Person{
	private int weight;//private라 get set 메소드로만 가능
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
		System.out.println("이름 : "+name);
		
	}
}
public class Question8 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Student st = new Student(33,23,176,"홍길동");
		st.out();
	}

}
