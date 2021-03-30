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
				new Kor("ȫ�浿",23,65),
				new Kor("ȫ�浿",43,69),
				new Kor("ȫ�浿",53,64),
				new Kor("��浿",33,63),
				new Kor("�ڱ浿",73,61));
		
		//���ٽ�
		alist.forEach(s->{System.out.println(s.getName()+s.getAge()+s.getJum());});
		
		//���� for��
		for(Kor k:alist) {
			System.out.println(k.name+k.age+k.jum);
		}
		
		//Iterator��
		Iterator<Kor> it = alist.iterator();
		while(it.hasNext()) {
			Kor s = it.next();
			System.out.println(s.getName()+s.getAge()+s.getJum());
		}
		
		
		//��Ʈ�� ����
		Stream<Kor> st = alist.stream();
		st.forEach(s->System.out.println(s.getName()+s.getAge()+s.getJum()));
		
		//��Ʈ��2
		Stream<Kor> st1 = alist.stream();
		st1.forEach(s->{
			String name=s.getName();
			int age = s.getAge();
			int jum = s.getJum();
			System.out.println(name+"\t"+age+"\t"+jum);
			
		});
		
		
		//���� ��� ���
		DecimalFormat df = new DecimalFormat("#,##0.00");
		double avg = alist.stream().mapToInt(Kor::getJum).average().getAsDouble();
		
		System.out.println("���� ���:"+df.format(avg));
		
		//���� �� ���
		int sum = alist.stream().mapToInt(Kor::getJum).sum();
		System.err.println("���� �հ�:"+sum);
		
		//�浿�� ��ճ���
		double avg2 = alist.stream().filter(m->m.getName()=="ȫ�浿").mapToInt(Kor::getAge).average().getAsDouble();
		System.out.println("ȫ�浿 ��ճ��� "+avg2);
		
		//�浿�̸鼭 ���� 65�̻� ��ճ���
		double avg3 = alist.stream().filter(m->m.getName()=="ȫ�浿"&&m.getJum()>=65).mapToInt(Kor::getAge).average().getAsDouble();
		System.out.println("ȫ�浿 ��ճ��� "+avg3);
		
		
		
	}
	
	

}
