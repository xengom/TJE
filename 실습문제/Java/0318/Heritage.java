class Father{
	int money;
	
	public Father() {
		super();//��ӹ޾��� ��� �θ�����ڿ��� ���� ����
	}
	
	public Father(int money) {
		this.money=money;
	}

	
	void out() {
		System.out.println("Father �� : "+money);
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
		System.out.println("��� ���� Father ��:"+super.money);
		System.out.println("Son ��:"+money);
	}
}
public class Heritage {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
	
		Son s = new Son(10000,5000);
		s.out();
	}

}
