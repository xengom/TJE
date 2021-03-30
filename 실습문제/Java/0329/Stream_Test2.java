import java.text.DecimalFormat;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;
import java.util.stream.Collectors;

class Kor implements Comparable <Kor>{
	String name;
	int age,jum;
	public Kor() {
		super();
		// TODO Auto-generated constructor stub
	}
	public Kor(String name, int age, int jum) {
		super();
		this.name = name;
		this.age = age;
		this.jum = jum;
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
	public int getJum() {
		return jum;
	}
	public void setJum(int jum) {
		this.jum = jum;
	}

	@Override
	public int compareTo(Kor o) {
		if(age>o.age)return 1;
		else if (age<o.age)return -1;
		return 0;
	}
	
}
public class Stream_Test2 {

	public static void main(String[] args) {

		
		DecimalFormat df = new DecimalFormat("#,##0.00");
		ArrayList<Kor> alist = new ArrayList<Kor>();
		alist.add(new Kor("´ëµÐ»ê",23,70));
		alist.add(new Kor("´ëµÐ»ê",23,70));
		alist.add(new Kor("´ëµÐ»ê",23,70));
		alist.add(new Kor("´ëµÐ»ê",23,70));
		alist.add(new Kor("´ëµÐ»ê",23,70));
		alist.add(new Kor("´ëµÐ»ê",23,70));
		
		//³ªÀÌ ¿À¸§Â÷¼ø Á¤·Ä
		List<Kor> blist = alist.stream().sorted(Comparator.comparing(Kor::getAge)).collect(Collectors.toList());
		blist.forEach(s->System.out.println(s.getName()+s.getAge()+s.getJum()));
		
	
	}

}
