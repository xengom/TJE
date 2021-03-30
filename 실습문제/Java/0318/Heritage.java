class Father{
	int money;
	
	public Father() {
		super();//상속받았을 경우 부모생성자에게 값을 전달
	}
	
	public Father(int money) {
		this.money=money;
	}

	
	void out() {
		System.out.println("Father 돈 : "+money);
	}
}

class Son extends Father{
	int money;
	
	public Son(int money,int money2) {
		super(money);
		// TODO Auto-generated constructor stub
		this.money = money2;
	}

	void out() {
		System.out.println("상속 받은 Father 돈:"+super.money);
		System.out.println("Son 돈:"+money);
	}
}
public class Heritage {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
	
		Son s = new Son(10000,5000);
		s.out();
	}

}
