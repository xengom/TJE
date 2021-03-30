class Bank{
	String name;
	public Bank(String name) {this.name = name;}
	private static Bank b = new Bank("한국 은행");//객체를 클래스 내에 만듬, 정적 메모리
	public String getName() {return name;}
	public void setName(String name) {this.name=name;}
	public static Bank getB() {return b;}
	public static void setB(Bank b) {Bank.b=b;}
}
public class Single_Tone {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Bank c = Bank.getB();
		System.out.println(c.getName());
	}

}
