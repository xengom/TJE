interface P{
	final String name = "ȫ�浿";
	void food();//���ɸ޴�
}
interface P2{
	final int don = 0;
	void duty();//��,��,��,���� or �ش����
}

class Stu implements P,P2{
	public void food() {
		
	}
	public void duty() {
		
	}
	void out() {
		System.out.println("���� ���� �޴� : "+name);
		System.out.println("������ �ǹ� : "+don);
	}
}
public class Samp2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

	}

}
