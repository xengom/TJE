interface soldier{
	void duty();
}

interface Food{
	void eat();
}
class Army implements soldier,Food{
	@Override
	public void duty() {
		System.out.println("������ �ǹ� ����");
	}
	public void eat() {
		System.out.println("������");
	}
}
class Navy implements soldier,Food{
	@Override
	public void duty() {
		System.out.println("�ٴٸ� ��Ű�� �ر�");
	}
	public void eat() {
		System.out.println("�غ���");
	}
}
public class Interface_Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
	}

}
