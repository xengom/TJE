class Person{
	int age,kids;
	String name;
	boolean marige;
	public Person(int age, String name, boolean marige, int kids) {
		this.age = age;
		this.kids = kids;
		this.name = name;
		this.marige = marige;
	}
	
	void out() {
		System.out.println("나이 : "+age +"\n이름 : "+name +"\n결혼여부 : "+marige +"\n자녀 수 : "+kids);
	}
}
public class Question {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Person p = new Person(30,"James",true,3);
		p.out();
	}

}
