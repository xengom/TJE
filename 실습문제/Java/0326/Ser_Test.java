import java.util.TreeSet;

class Company implements Comparable<Company>{
	String pname;
	int su,dan,maechul;
	public Company() {
		super();
		// TODO Auto-generated constructor stub
	}
	public Company(String pname, int su, int dan) {
		super();
		this.pname = pname;
		this.su = su;
		this.dan = dan;
	}
	public String getPname() {
		return pname;
	}
	public void setPname(String pname) {
		this.pname = pname;
	}
	public int getSu() {
		return su;
	}
	public void setSu(int su) {
		this.su = su;
	}
	public int getDan() {
		return dan;
	}
	public void setDan(int dan) {
		this.dan = dan;
	}
	public int getMaechul() {
		return maechul;
	}
	public void setMaechul(int maechul) {
		this.maechul = maechul;
	}
	@Override
	public int compareTo(Company o) {
		// TODO Auto-generated method stub
		return o.pname.compareTo(pname);
	}
	
}


public class Ser_Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		TreeSet<Company> tc = new TreeSet<Company>();
		tc.add(new Company("냉면",30,3500));
		tc.add(new Company("온면",30,3500));
		tc.add(new Company("라면",30,3500));
		tc.add(new Company("장면",30,3500));
		tc.add(new Company("대면",30,3500));
		
		for(Company cc: tc) {
			System.out.println(cc.getPname()+"\t"+cc.getSu()+"\t"+cc.getDan()+"\t"+cc.getSu()*cc.getDan());
		}
	}

}
