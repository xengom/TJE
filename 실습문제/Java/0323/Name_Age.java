import java.util.*;

class Saram implements Comparable<Saram>{
	String name;
	int age;
	public Saram() {	//default»ý¼ºÀÚ

	}
	public Saram(String name, int age) {
		super();
		this.name = name;
		this.age = age;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public int getAge() {
		return age;
	}
	public void setAge(int age) {
		this.age = age;
	}
	@Override
	public String toString() {
		return "Saram [name=" + name + ", age=" + age + "]";
	}
	@Override
	public int compareTo(Saram o) {
		// TODO Auto-generated method stub
		
		return name.compareTo(o.name);
	}
	
	
}
public class Name_Age {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
			Set<Saram> ss = new TreeSet<Saram>();
			ss.add(new Saram("±è»ñ°«",23));
			ss.add(new Saram("±èÆÇ´Ù",27));
			ss.add(new Saram("È«¿©¿ì",26));
			ss.add(new Saram("¼Û´Á´ë",25));
			ss.add(new Saram("ÀÌ°³¹Ì",24));
			ss.forEach(s->System.out.println(s.getName()+"\t"+s.getAge()));
	}
	

}
