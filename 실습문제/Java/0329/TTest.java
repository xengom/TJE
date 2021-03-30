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
		alist.add(new DEP("인사과",32,3000000));
		alist.add(new DEP("자재과",12,1500000));
		alist.add(new DEP("인사과",53,6000000));
		alist.add(new DEP("총무과",42,5000000));
		alist.add(new DEP("인사과",84,8000000));
		alist.add(new DEP("자재과",14,1600000));
		alist.add(new DEP("자재과",32,3000000));
		alist.add(new DEP("총무과",22,3000000));
		List<DEP> blist = alist.stream().sorted(Comparator.comparing(DEP::getDep)).collect(Collectors.toList());
		System.out.print("부서 입력");
		Scanner sc = new Scanner(System.in);
		String inp = sc.next();	
		double mon = blist.stream().filter(m->m.getDep().equals(inp)).mapToInt(DEP::getMonth).average().getAsDouble();
		double sala = blist.stream().filter(m->m.getDep().equals(inp)).mapToInt(DEP::getSal).average().getAsDouble();
		System.out.println("부서\t입사기간\t급여");
		blist.forEach(s->System.out.println(s.getDep()+"\t"+s.getMonth()+"\t"+df.format(s.getSal())));
		System.out.println(inp+"의 평균 개월 :"+df.format(mon));
		System.out.println(inp+"의 평균 급여 :"+df.format(sala));
		
		
		//부서의 최고 급여액
		int maxpay = blist.stream().filter(m->m.getDep().equals(inp)).mapToInt(DEP::getSal).max().getAsInt();
		System.out.println(inp+"의 최고 급여:"+maxpay);
	}

}