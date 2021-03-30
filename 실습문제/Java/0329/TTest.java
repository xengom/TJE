import java.text.DecimalFormat;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;
import java.util.OptionalInt;
import java.util.Scanner;
import java.util.stream.Collectors;

class DEP{
	String dep;
	int month;
	int sal;
	public DEP() {
		super();
		// TODO Auto-generated constructor stub
	}
	public DEP(String dep, int month, int sal) {
		super();
		this.dep = dep;
		this.month = month;
		this.sal = sal;
	}
	public String getDep() {
		return dep;
	}
	public int getMonth() {
		return month;
	}
	
	public void setSal(int sal) {
		this.sal = sal;
	}
	public int getSal() {
		return sal;
	}	
}
public class TTest {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		DecimalFormat df = new DecimalFormat("#,##0.00");
		ArrayList<DEP> alist = new ArrayList<DEP>();
		alist.add(new DEP("�λ��",32,3000000));
		alist.add(new DEP("�����",12,1500000));
		alist.add(new DEP("�λ��",53,6000000));
		alist.add(new DEP("�ѹ���",42,5000000));
		alist.add(new DEP("�λ��",84,8000000));
		alist.add(new DEP("�����",14,1600000));
		alist.add(new DEP("�����",32,3000000));
		alist.add(new DEP("�ѹ���",22,3000000));
		List<DEP> blist = alist.stream().sorted(Comparator.comparing(DEP::getDep)).collect(Collectors.toList());
		System.out.print("�μ� �Է�");
		Scanner sc = new Scanner(System.in);
		String inp = sc.next();	
		double mon = blist.stream().filter(m->m.getDep().equals(inp)).mapToInt(DEP::getMonth).average().getAsDouble();
		double sala = blist.stream().filter(m->m.getDep().equals(inp)).mapToInt(DEP::getSal).average().getAsDouble();
		System.out.println("�μ�\t�Ի�Ⱓ\t�޿�");
		blist.forEach(s->System.out.println(s.getDep()+"\t"+s.getMonth()+"\t"+df.format(s.getSal())));
		System.out.println(inp+"�� ��� ���� :"+df.format(mon));
		System.out.println(inp+"�� ��� �޿� :"+df.format(sala));
		
		
		//�μ��� �ְ� �޿���
		int maxpay = blist.stream().filter(m->m.getDep().equals(inp)).mapToInt(DEP::getSal).max().getAsInt();
		System.out.println(inp+"�� �ְ� �޿�:"+maxpay);
	}

}