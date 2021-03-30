import java.text.DecimalFormat;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.List;
import java.util.stream.Stream;

class Kor{
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
	
}
public class Stream_Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
	
		
		
		
		List<Kor> alist =  Arrays .asList(
				new Kor("홍길동",23,65),
				new Kor("홍길동",43,69),
				new Kor("홍길동",53,64),
				new Kor("김길동",33,63),
				new Kor("박길동",73,61));
		
		//람다식
		alist.forEach(s->{System.out.println(s.getName()+s.getAge()+s.getJum());});
		
		//빠른 for문
		for(Kor k:alist) {
			System.out.println(k.name+k.age+k.jum);
		}
		
		//Iterator식
		Iterator<Kor> it = alist.iterator();
		while(it.hasNext()) {
			Kor s = it.next();
			System.out.println(s.getName()+s.getAge()+s.getJum());
		}
		
		
		//스트림 연산
		Stream<Kor> st = alist.stream();
		st.forEach(s->System.out.println(s.getName()+s.getAge()+s.getJum()));
		
		//스트림2
		Stream<Kor> st1 = alist.stream();
		st1.forEach(s->{
			String name=s.getName();
			int age = s.getAge();
			int jum = s.getJum();
			System.out.println(name+"\t"+age+"\t"+jum);
			
		});
		
		
		//점수 평균 출력
		DecimalFormat df = new DecimalFormat("#,##0.00");
		double avg = alist.stream().mapToInt(Kor::getJum).average().getAsDouble();
		
		System.out.println("점수 평균:"+df.format(avg));
		
		//점수 합 출력
		int sum = alist.stream().mapToInt(Kor::getJum).sum();
		System.err.println("점수 합계:"+sum);
		
		//길동이 평균나이
		double avg2 = alist.stream().filter(m->m.getName()=="홍길동").mapToInt(Kor::getAge).average().getAsDouble();
		System.out.println("홍길동 평균나이 "+avg2);
		
		//길동이면서 점수 65이상 평균나이
		double avg3 = alist.stream().filter(m->m.getName()=="홍길동"&&m.getJum()>=65).mapToInt(Kor::getAge).average().getAsDouble();
		System.out.println("홍길동 평균나이 "+avg3);
		
		
		
	}
	
	

}
